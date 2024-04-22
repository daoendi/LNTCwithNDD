#include <iostream>
#include <cstring>

using namespace std;
struct String
{
    char* str;
    int n ;
    String (const char* s)
    {
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }
    void print()
    {
        cout << str;
    }
    void append(const char* str2)
    {
        int n2 = strlen(str2);
        char* temp = new char [n + n2 + 1];
        strcpy(temp,str);
        strcat(temp,str2);
        n = n + n2 + 1;
        str = new char[n];
        strcpy(str,temp);
        delete[] temp;
    }



};
int main()
{

    String s("Hi");

    s.append(" there");
    s.print();
    return 0;
}
