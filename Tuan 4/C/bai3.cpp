#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool check (int n){
    string s = to_string(n);
    int leng = s.length();
    int count = leng /2;
    for (int i = 0; i < count; i++){
    if(s[i] != s[leng - i - 1]){
        return 0;
     }
   }
    return 1;
}
int main(){
    int a , b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i < b + 1; i++){
        if (check(i)) count++;
    }
    cout << count;
}

