#include <iostream>

using namespace std;

int main(){
    int n,m;
    int count = 0;
    cout << "Nhap so doi vo: "; cin >> n;
    cout << "Nhap so ngay: "; cin >> m;
    if(n == 0){
        cout << "0";
    }
    while(n < 0 || m <= 0 ){
    cout << "Nhap so doi vo: "; cin >> n;
    cout << "Nhap so ngay: "; cin >> m;
    }
    int temp = n;
    while(temp >= m){
        temp = temp - m + 1;
        count++;
    }
    cout << n + count << endl;
    return 0;
}