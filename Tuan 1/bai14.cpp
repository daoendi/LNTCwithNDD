#include <iostream>
#include <cmath>
using namespace std;
string fibonacciWord(int n) {
    if (n == 0) return "a";
    if (n == 1) return "b";
    return fibonacciWord(n - 1) + fibonacciWord(n - 2);}

int main(){
    int n ;
    cin >> n ;
    cout << fibonacciWord(n);

}
