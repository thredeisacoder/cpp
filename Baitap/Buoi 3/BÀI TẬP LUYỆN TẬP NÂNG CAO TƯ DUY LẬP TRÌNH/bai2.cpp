#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int count(int n){
    int count = 0;
    while (n > 0){
        n /= 10;
        count++;
    }
    return count;
}

int reverse(int n){
    int tmp = 0,
        reverse = 0;
    while (n > 0){
        tmp = n % 10;
        reverse = reverse * 10 + tmp;
        n /= 10;
    }
    return reverse;
}

int main(){
    int n,
        save = 0;
    bool check = true;
    do{
        cout << "Nhap n: ";
        cin >> n;
        save = n;
    }while(n < 0);
    int temp = 0,
        sum = 0;
    int So_mu = count(n),
        reverseNum = reverse(n);
    int loop = reverseNum;
    while(reverseNum > 0){
        temp = reverseNum % 10;
        reverseNum /= 10;
        sum += pow(temp, So_mu);
        if(save == sum){
            check = true;
        }else{
            check = false;
        }
    }
    if(check == true){
        cout << "So Amstrong vi ";
        for(int i = 0; i < loop; i++){
            temp = loop % 10;
            loop /= 10;
            cout << temp << "^" << So_mu << " ";
            if (loop!=0){
                cout << "+ ";
            }
        }
        cout <<" bang " << save;
    }else{
        cout << "Khong phai so Amstrong vi ";
        for(int i = 0; i < loop; i++){
            temp = loop % 10;
            loop /= 10;
            cout << temp << "^" << So_mu << " ";
            if (loop!=0){
                cout << "+ ";
            }
        }
        cout << " khac " << save;
    }
    return 0;
}


