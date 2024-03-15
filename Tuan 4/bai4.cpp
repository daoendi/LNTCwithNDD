#include <iostream>
using namespace std;
int main(){
    int col , row;
    cin >> row >> col;
    char a[row][col];
    for (int i = 0; i < row; i ++){
        for (int j = 0; j < col; j++){
            cin >> a[i][j];
            if (a[i][j] == '.') a[i][j] = '0';
        }
    }
     for (int i = 0; i < row; i ++){
        for (int j = 0; j < col; j++){

            if (i == 0){
                if (j == 0)
            }
        }
    }



     for (int i = 0; i < row; i ++){
        for (int j = 0; j < col; j++){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }

}
