#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    do{
        cin >> n;
    }while(n >= 1 && n <= 100);
    string array[1000];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    for(int i = 0; i < n; i++){
        if(array[i].length()>= 10){
            cout << array[i] << endl;
        }
    }
    return 0;
}