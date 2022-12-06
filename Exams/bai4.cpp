#include <iostream>

using namespace std;

int main(){
    int n = 12;
    // cin >> n;
    int array[100]= {-4, 5, 0, 6, -1, 0, 8, 3, -11, 15, 2, 1};
    // for(int i=0; i<n; i++){
    //     cin >> array[i];
    // }
    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(array[i] < array[j]){
                int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
            }
        }
        cout << array[i] << " ";
    }
    return 0;
}