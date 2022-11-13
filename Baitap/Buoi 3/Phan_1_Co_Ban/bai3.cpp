#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    int S = 0;
    cout << "Nhap n: ";
    cin >> n;
    while(n <= 0){
        cout << "Nhap n: ";
        cin >> n;
    }
    for(int i = 0; i <= n; i++){
        S= S + i * i;
    }
    cout << "S(n)= " << S << endl;
    return 0;
}