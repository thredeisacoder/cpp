#include <iostream>
using namespace std;
// void read(int* &p, int &n){
//     cout << "enter n: ";
//     cin >> n;
//     p = new int[n];
//     for(int i=0; i<n; i++){
//         cin >> p[i];
//     }
// }
void print(int *p, int n){
    for(int i=0; i<n; i++){
        cout << p[i] << " ";
    }
}
int* read_ver2(int *p, int &n){
    cin >> n;
    p = new int[n];
    for(int i=0; i<n; i++){
        cin >> p[i];
    }
    return p;
}

int main(){
    int n;
    int *p = NULL;
    p = read_ver2(p, n);
    // read(p, n);
    print(p, n);
    delete[] p;
    return 0;
}