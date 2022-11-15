#include <iostream>

using namespace std;

int main(){
    int n;
    int save = 0,
        temp = 0,
        reverse = 0;
    bool check = true;
    do{
        cout << "Nhap n: ";
        cin >> n;
        save = n;
    }while(n <= 0);
    if(n > 0 && n < 10 ){
        check = true;
    }else{
        while(n > 0){
            temp = n % 10;
            reverse = reverse * 10 + temp;
            n /= 10;
        }
        if(save != reverse){
            check = false;
        }
    }
    if(check == true){
        cout << "So doi xung";
    }else{
        cout << "Khong phai so doi xung";
    }
    return 0;
}