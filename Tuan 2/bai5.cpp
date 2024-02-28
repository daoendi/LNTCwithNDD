#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> below_20 = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                                     "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
vector<string> tens = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string convertThreeDigits(int num) {
    string result = "";
    if (num >= 100) {
        result += below_20[num / 100] + " hundred ";
        num %= 100;
    }
    if (num > 0) {
        if (!result.empty()) {
            result += "and ";
        }
        if (num < 20) {
            result += below_20[num] + " ";
        } else {
            result += tens[num / 10] + " ";
            num %= 10;

            if (num > 0) {
                result += below_20[num] + " ";
            }
        }
    }
    return result;
}
string numberToEnglish(int num) {
    if (num == 0) {
        return "zero";
    }
    string result = "";
    if (num < 0) {
        result += "negative ";
        num = -num;
    }
    if (num >= 1000000) {
        result += convertThreeDigits(num / 1000000) + "million ";
        num %= 1000000;
    }
    if (num >= 1000) {
        result += convertThreeDigits(num / 1000) + "thousand ";
        num %= 1000;
    }
    if (num > 0) {
        result += convertThreeDigits(num);
    }

    return result;
}

int main() {
    int num;
    cin >> num;
    string result = numberToEnglish(num);
    cout << result << endl;

    return 0;
}
