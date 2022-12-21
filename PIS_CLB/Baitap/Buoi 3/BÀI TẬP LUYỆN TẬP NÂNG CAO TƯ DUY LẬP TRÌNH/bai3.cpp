#include <iostream>

using namespace std;

int main(){
    int n;
    bool check = true;
    do{
        cout << "Nhap n: ";
        cin >> n;
    } while (n  <= 0);
    if(n < 2){
        check = false;
    }else if(n == 2){
        check = true;
    }else if(n % 2 == 0){
        check = false;
    }else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                check = false;
                break;
            }
        }
    }
    if(check == true){
        cout << "So nguyen to";
    }else if(check == false){
        cout << "Khong phai so nguyen to";
    }
    return 0;  
}