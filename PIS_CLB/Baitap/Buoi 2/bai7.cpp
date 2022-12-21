#include <iostream>

using namespace std;

int main(){
    string s;
    cout << "Nhap chuoi: ";
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
    cout << "In hoa: " << s;
    return 0;
}