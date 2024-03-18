#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int col(n), row(n);
   int value = 1;
   int matrix[row][col] ;
   int xrow(0), yrow(row - 1), xcol(0), ycol(col - 1);
   while(xrow <= yrow && xcol <= ycol){
       for (int i = xcol; i <= ycol; ++i){
            matrix[xrow][i] = value++;
       }
       for (int i = xrow + 1; i <= yrow; ++i){
           matrix[i][ycol] = value++;
       }
       if (xrow < yrow ){
           for (int i = ycol - 1; i >= xcol; --i){
               matrix[ycol][i] = value++;
           }
       }
       if (xcol < ycol){
           for (int i = yrow - 1; i > xrow; --i){

               matrix[i][xcol] = value++;
           }
       }
       xrow++;
       xcol++;
       yrow--;
       ycol--;
   }
     for (int i = 0; i < col; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
