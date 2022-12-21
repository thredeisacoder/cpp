#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s[100];
    int count;
    cout << "Nhap chuoi: ";
    gets(s);
    count = strlen(s);
    cout << "Do dai cua chuoi la: " << count << endl;
    return 0;
}