#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s[100];
    cout << "Nhap chuoi: ";
    gets(s);
    cout << "Chuoi bi dao nguoc la: " << strrev(s);
    return 0;
}