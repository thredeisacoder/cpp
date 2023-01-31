#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,
        array[1000],
        count = 0;
    do{
        cout << "Nhap so phan tu mang: ";
        cin >> n;
    } while (n < 0);
    for (int i = 0; i < n; i++){
        cout << "a[" << i+1 <<"]= ";
        cin >> array[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
    }  
    cout << "So cap bang nhau la: " <<count;
    return 0;
}