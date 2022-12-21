#include <iostream>

using namespace std;

int main(){
    int n;
    int sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    while(n <= 0){
        cout << "Nhap n: ";
        cin >> n;
    }
    for(int i = 0; i <= n; i++){
        sum= sum + i;
    }
    cout << "S(n)= " << sum << endl;
    return 0;
}