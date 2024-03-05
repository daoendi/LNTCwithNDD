#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int card1 , card2;
   cin >> card1 >> card2;
   if ( 100 - card1 > card2 ) cout << card2;
   else cout << card1;
}
