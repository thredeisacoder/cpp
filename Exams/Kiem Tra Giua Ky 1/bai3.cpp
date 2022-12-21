#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int array[100];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    int max = array[0],
        tmp = 0;
    for(int i = 0; i < n; i++){
        if(array[i] >= max){
            max = array[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(array[i] == max){
            cout << i << " ";
        }
    }
    return 0;
}