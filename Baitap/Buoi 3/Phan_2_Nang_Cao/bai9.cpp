#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    while(n <= 0){
        cout << "Nhap n: ";
        cin >> n;
    }
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + 1.0/i;
    }
    cout << "S(n)= " << sum;
    return 0;
}