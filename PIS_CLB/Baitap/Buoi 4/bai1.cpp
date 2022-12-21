#include <iostream>

using namespace std;

int main(){
    int n,
        array[1000],
        sum = 0;

    do{
        cout << "Nhap so luong mang: ";
        cin >> n;
    }while(n < 0);
    
    for(int i = 1; i <= n; i++){
        cout << "Mang thu " << i << " : ";
        cin >> array[i];
        sum += array[i];
    }
    cout << "Tong cac phan tu mang: " << sum;
    return 0;
}