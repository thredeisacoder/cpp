#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    int sum = 0;
    cout << "Nhap N: ";
    cin >> n;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    cout << "Tong: " << sum;
    return 0;
}