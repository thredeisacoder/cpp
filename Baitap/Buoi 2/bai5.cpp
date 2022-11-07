#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Nhap day dai: ";
    cin >> a;
    cout << "Nhap day ngan: ";
    cin >> b;
    cout << "Nhap chieu_cao: ";
    cin >> c;
    cout << "Dien tich hinh thang la: " << (c * (a + b)) / 2;
    return 0;
}