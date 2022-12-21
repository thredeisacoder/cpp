#include <iostream>

using namespace std;

int main(){
    int n;
    int S = 1;
    cout << "Nhap n: ";
    cin >> n;
    while(n <= 0){
        cout << "Nhap n: ";
        cin >> n;
    }
    for(int i = 1; i <= n; i++){
        S= S * i;
    }
    cout << "S(n)= " << S << endl;
    return 0;
}