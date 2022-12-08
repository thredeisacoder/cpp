#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;
    double x1, x2;
    do{
        cout << "Nhap so a (a khac 0): "; cin >> a;
    }while(a == 0);
    cout << "Nhap so b: "; cin >> b;
    cout << "Nhap so c: "; cin >> c;
    double delta = b*b - (4*a*c);
    if(delta < 0){
        cout << "VN";
    }else if(delta > 0){
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        cout << x1 << " " << x2;
    }else if(delta == 0){
        cout << "VSN";
    }
    return 0;
}