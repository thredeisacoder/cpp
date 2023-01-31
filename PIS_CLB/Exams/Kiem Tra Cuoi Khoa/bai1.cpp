#include <bits/stdc++.h>

using namespace std;

int TongCacUoc(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n;
    do{
        cout << "Nhap so nguyen n: ";
        cin >> n;
    }while(n < 0);
    int save = TongCacUoc(n);
    if(save == n){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}