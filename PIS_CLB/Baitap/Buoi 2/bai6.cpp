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
    strcat(s1, s2);
    cout << "S1: " << s1;
    return 0;
}