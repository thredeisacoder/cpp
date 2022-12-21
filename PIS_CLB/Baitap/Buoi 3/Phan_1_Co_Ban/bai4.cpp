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
    for(int i = 0; i <= n; i++){
        if(i % 2 == 0 && i != 0){
            cout << i << " ";
        }
    }
    return 0;
}