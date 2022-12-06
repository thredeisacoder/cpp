#include <iostream>

using namespace std;

int main(){
    int n = 12;
    // cin >> n;
    int array[n]= {-4, 5, 0, 6, -1, 0, 8, 3, -11, 15, 2, 1};
    // for(int i=0; i<n; i++){
    //     cin >> array[i];
    // }
    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
            }
        }
        for(int h = i + 1; h < n; h++){
            if(array[i] > 0){
                if(array[i] < array[h]){
                    int temp = array[i];
                        array[i] = array[h];
                        array[h] = temp;
                }
            }
        }
        cout << array[i] << " "; //em da co gang het suc huhu
    }
    return 0;
}