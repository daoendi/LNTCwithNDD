#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n] = {};
    int _n = n;
    int i;
    while(_n--){
        cin >> i;
        a[i]++;
        if (a[i] >  1){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";

}
