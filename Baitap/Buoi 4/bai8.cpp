#include <iostream>

using namespace std;

int main(){
    int n,
        array[100];
    bool check = true;
    do{
        cout << "Nhap so phan tu: ";
        cin >> n;
    }while(n < 0);
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu a[" << i + 1 << "]: ";
        cin >> array[i];
    }
    for(int i = 0; i < n / 2; i++){
        if(array[i] > array[i + 1]){
            check = false;
            break;
        }
    }
    if(check == true){
        cout << "Mang tang dan!";
    }else{
        cout << "Mang khong tang dan!";
    }
    return 0;
}