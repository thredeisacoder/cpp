#include <iostream>

using namespace std;

int main(){
    int a[100][100];
    int b[100];
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                b[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    return 0;
}