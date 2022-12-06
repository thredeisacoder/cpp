#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int array[100];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int min = array[0],
        max = array[0];
    for(int i = 0; i < n; i++){
        if(array[i] < min){
            min = array[i];
        }else if(array[i] > max){
            max = array[i];
        }
    }
    cout << max - min;
    return 0;
}