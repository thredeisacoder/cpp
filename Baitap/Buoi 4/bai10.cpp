#include <iostream>
#include <array>

using namespace std;

int main(){
    int row,
        column,
        array[100][100];
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
    int min = array[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(array[i][j] < min){
                min = array[i][j];
                cout << "So nguyen nho nhat o: a[" << i << "]" << "[" << j << "]" << "\n";
            }
        }
    }
    return 0;
}