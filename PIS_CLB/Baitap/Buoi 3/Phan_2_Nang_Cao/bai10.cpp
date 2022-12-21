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
    for(int i = 0; i <= n; i++){
        sum = sum + 1.0/(2 * i + 1);
    }
    cout << "S(n)= " << sum;
    return 0;
}