#include <bits/stdc++.h>

using namespace std;

int ReverseNum(int n){
    int reverse = 0;
    while(n > 0){
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse;
}

int main(){
    int a, b ,k;
    int count = 0;
    cout << "Nhap so a: "; cin >> a; 
    cout << "Nhap so b: "; cin >> b;
    cout << "Nhap so k: "; cin >> k;
    for(int i = a; i <= b; i++){
        if(abs(i - ReverseNum(i)) % k == 0){
            count ++;
        }
    }
    cout << "So luong so nguyen beautiful number la: " << count << endl;
    return 0;
}