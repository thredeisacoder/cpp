#include <iostream> 

using namespace std;

int main(){
    int n,
        array[1000],
        sum = 0;
    do{
        cout << "Nhap so phan tu mang: ";
        cin >> n;
    }while(n < 0);

    for(int i = 1; i <= n; i++){
        cout << "Mang thu " << i << " : ";
        cin >> array[i];
        sum += array[i];
    }
    cout << "Trung binh cong cac phan tu: " << sum / n;
    return 0;
}