#include <iostream>

using namespace std;

int main(){
    int n,
        array[1000];
    do{
        cout << "Nhap so phan tu: ";
        cin >> n;
    }while(n < 0);
    for (int i = 1; i <= n; i++){
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> array[i];
        if(array[i] < 0){
            array[i] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << "A[" << i  << "] = " << array[i] << endl;
    }
    return 0;
}