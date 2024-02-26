#include <iostream>
#include <ctime>

#define START 0
#define GOOD_GUESS 1
#define BAD_GUESS 2
#define MAX_BAD_GUESSES 5

using namespace std;
const string WORD_LIST[] = {"dog", "cat", "human","pig","house"};
const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);

const string& chooseWord() {
    int randomIndex = rand() % WORD_COUNT;
    return WORD_LIST[randomIndex];

}
struct Hangman {
    string secretWord;
    string guessedWord;
    int badGuesses;
    int hiddenLetters;
    int status = START;
    void init() {
        secretWord = chooseWord() ;
        guessedWord = string(secretWord.length(), '_');
        badGuesses = 0;
        hiddenLetters = secretWord.length();

    }
       void update(char input) {
        status = BAD_GUESS;
        for (int i = 0; i < secretWord.length(); i++) {
            if (guessedWord[i] == '_' && secretWord[i] == input) {
                guessedWord[i] = input;
                status = GOOD_GUESS;
                hiddenLetters--;
            }
        }
        if (BAD_GUESS == status) badGuesses++;
    }

    bool won() { return (hiddenLetters <= 0); }
    bool lost() { return (badGuesses > MAX_BAD_GUESSES); }
    bool isOver() { return won() || lost(); }
};
void render(Hangman& game) {
    if (game.status == GOOD_GUESS) cout << "Good guess!" << endl;
    else if (game.status == BAD_GUESS) cout << "Bad guess!" << endl;

    cout << "Bad guesses: " << game.badGuesses << endl;
    cout << "Guessed word: " << game.guessedWord << endl;

    if (game.won()) cout << "You won!";
    else if (game.lost()) cout << "You lost!";
}

char getInput() {
    string input;
    cout << "Make a guess: ";
    cin >> input;
    return input[0];
}

int main(int argc, char** argv)
{
    Hangman game;
    srand(time(0));
    game.init();
    render(game);
    do {
        char input = getInput();
        game.update(input);
        render(game);
    } while (!game.isOver());
}


