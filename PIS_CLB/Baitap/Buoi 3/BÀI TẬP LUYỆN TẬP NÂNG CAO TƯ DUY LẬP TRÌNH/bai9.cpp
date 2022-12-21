#include <iostream>

using namespace std;

int main(){
    int n;
    int temp = 0;
    int max = 0;
    cout << "Nhap n: ";
    cin >> n;
    while(n <= 0){
        cout << "Nhap n: ";
        cin >> n;
    }
    while(n > 0){
        temp = n % 10;
        if(temp > max){
            max = temp;
        }
        n = n / 10;
    }
    cout << max;
    return 0;
}