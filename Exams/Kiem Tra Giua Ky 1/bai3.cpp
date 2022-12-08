#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int array[100],
        save = 0;
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    int max = array[0];
    for(int i = 0; i < n; i++){
        if(array[i] > max){
            max = array[i];
            save = i;
        }
    }
    cout << save;
    return 0;
}