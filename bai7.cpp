#include <iostream>
using namespace std;
int main(){
    int n;
    int num = -5;
    while(1){
    cin >> n;
    if (n < 0 ){
        cout << n;
        return 0;
    }

    if ( n != num){
        cout << n << " ";
    }
    num = n;
    }

}
