#include <iostream>
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include <ctime>
using namespace std;


//Bai 5
int SNT (int n){
    if ( n < 3 ) return 0;
    int a = n - 1;
    while (a > 1)
    {
        if (n % a == 0 ) return 0;
        a--;
    }
    return 1;
}
//bai 6
int UCLN( int a, int b)
{
    int lon = (a > b) ? a: b;
    int be = (a < b) ? a: b;
    int temp;
    while (1)
    {
        if (lon % be == 0) return be;
            temp = be;
            be = lon % be;
            lon = temp;

        if ( be == 1) return 1;

    }
}
//bai 7
void printTriangle (int n)
{
        int a = n /2;
        int b = 0;
    for (int i = 0; i < n;i++)
    {
        for (int i = b; i < n; i++){
            cout << " ";
        }
        for (int i = a; i <= n / 2; i++){
            cout << "*" ;
        }
        b += 1;
        a -= 2;
        cout << endl;
    }

}
//bai 8
int lamtron1 (double num)
{
    return (int)ceil(num);
}
int lamtron2 (double num)
{
    if (num >= 0)
    {
     return (int)(num + 0.5);
    }
    else
    {
    return (int)(num - 0.5);
    }
}
//bai 9
int random_N (int N)
{
    srand(time(NULL));
    return rand() % N;
}

//bai 10
void bobaso(int a[], int N)
{
    for (int i = 0; i<N; i++) a[i] = rand()%50;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if ((a[i] + a[j] + a[k]) % 25 == 0) {
                    cout << "(" << a[i] << ", " << a[j] << ", " << a[k] << ")" << endl;
                }
            }
        }
    }
}
//bai 11
void HeNhiPhan (int N)
{
    int array1[32];
    int count = 0;
    while(N > 0)
    {
        array1[count] = N % 2;
        count++;
        N = N / 2;
    }
    for(int i = count - 1; i >= 0; i-- ) cout << array1[i];
}
void He10( string s)
{
    int len = s.length();
    int temp = 0;
    for(int i = 0; i < len; i++){
        temp += (s[i] - '0') * pow(2, len - 1 - i) ;

    }
    cout << temp;
}
int main()
{
    He10("10100");

}
