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
    int s=0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && i!=n)
        {
            s+=i;
            cout << i << " + ";
        }
        else if (i==n)
        {
            s+=i;
            cout << i << " = ";
        }
        
    }
    cout << s;
    return 0;
}