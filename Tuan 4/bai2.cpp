#include <iostream>
using namespace std;
int main(){
   string s;
   cin >> s;
   int leng = s.length();
   int count = leng /2;
   for (int i = 0; i < count; i++){
     if(s[i] != s[leng - i - 1]){
        cout << "NO";
        return 0;
     }
   }
    cout << "YES";
}
