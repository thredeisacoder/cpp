#include <iostream>

using namespace std;

int count[1000000];

int main(){
    int n;
    do{
        cout << "Nhap n = ";
        cin >> n;
    }while(n < 1);
    int a[n];
    for(int i = 0; i < n; i++){
        do{
            cout << "Nhap a[" << i << "] = ";
            cin >> a[i];
        }while(a[i] < 0);
    }
    for(int i = 0;i < 1000000; i++){
        count[i] = 0;
        }
    for(int i = 0; i < n;i++){
        count[a[i]]++;
    }
    for(int i = 0;i < 1000000; i++){
        if(count[i] > 0){
            cout << "Gia tri " << i << " xuat hien " << count[i] << " lan!\n";
        }
    }
}
