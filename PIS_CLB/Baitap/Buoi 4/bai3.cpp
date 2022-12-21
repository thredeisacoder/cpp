#include <iostream>
#include <array>

using namespace std;

void Delete(int array[], int &n, int k){
    for(int i = k; i <= n - 2; i++){
        array[i] = array[i + 1];
        n--;
    }
}

int main(){
    int n,
        array[1000],
        k;
    do{
        cout << "Nhap so luong mang: ";
        cin >> n;
        cout << "Nhap vi tri can xoa: ";
        cin >> k;
    }while(n < 0 || k < 0);
    
    for(int i = 0; i < n; i++){
        cout << "Nhap mang thu " << i << ": ";
        cin >> array[i];
    }
    Delete(array, n, k);
    for(int i = 0; i < n; i++){
        cout << "Mang a[" << i << "]: " << array[i] << " ";
    }
    return 0;
}