#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s1[100];
    char s2[100];
    cout << "Nhap chuoi s1: ";
    gets(s1);
    cout << "Nhap chuoi s2: ";
    gets(s2);
    if(strcmp(s1, s2) == 0){
        cout << "Hai chuoi bang nhau";
    }else if(strcmp(s1, s2) > 0){
        cout << "Chuoi s1 lon hon chuoi s2";
    }else{
        cout << "Chuoi s1 nho hon chuoi s2";
    }
    return 0;
}