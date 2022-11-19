#include <iostream>

using namespace std;

int main(){
    int row,
        column,
        array[100][100],
        sum = 0;
    do{
        cout << "Nhap so hang: " ;
        cin >> row;
        cout << "Nhap so cot: ";
        cin >> column;
    }while(row < 0 || column < 0);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << "Nhap phan tu a[" << i << "]" << "[" << j << "]: ";
            cin >> array[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
                if(array[i][j] % 2 == 0){
                    sum += array[i][j];
                }
            }
        }
        cout << "Tong: " << sum;
    return 0;
}