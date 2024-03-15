#include <iostream>
using namespace std;
char a[1000][1000] = {};
int c[8]={-1,0,1,1,1,0,-1,-1};
int h[8]={-1,-1,-1,0,1,1,1,0};
int dmin(int x,int y)
{
    int res = 0;
    for(int i = 0; i < 8; i++)
    {
       if(a[x+h[i]][y+c[i]] == '*') res++;
    }
    return res;
}
int main(){
    int col , row;
    cin >> row >> col;
    for (int i = 1; i < row + 1; i ++){
        for (int j = 1; j < col + 1; j++){
            cin >> a[i][j];
        }
    }

     for(int i = 1; i < row + 1; i++)
    {
        for(int j = 1; j < col + 1; j++)
        {
            if(a[i][j]=='*') cout << a[i][j] << " ";
            else cout << dmin(i,j)<<" ";
        }
        cout << endl;
    }
}
