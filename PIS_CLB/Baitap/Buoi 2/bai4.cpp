#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Nhap so c: ";
    cin >> c;
    int min = a;
    if(b < min){
        min = b;
        cout << "So be nhat la: " << min;
    }else if(c < min){
        min = c;
        cout << "So be nhat la: " << min;
    }else{
        cout << "So be nhat la: " << min;
    }
    return 0;
}