#include <iostream>
using namespace std;
int main(){
    int So;
    cin >> So;
    int i = 2;
    while(i < So){
        if (So % i == 0){
            cout << "no";
            return 0;
        }
        i++;
    }
    cout << "yes";
}
