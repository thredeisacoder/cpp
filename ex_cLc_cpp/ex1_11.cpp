#include <iostream>
using namespace std;

void count_often(int array[], int count[], int &n) {
    int count_del=0;
    for(int i=0; i<n; i++){
        count[i] = 1;
        for(int j=i + 1; j<n; j++){
            if(array[i] == array[j]){
                count_del++;
                array[i] = array[j];
                count[i]++;
            }
        }
    }
    n-= count_del;
}
int main(){
    int n;
    cin >> n;
    int array[1000];
    int count[1000];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    count_often(array, count, n);
    for(int i=0; i<n; i++){
        cout << array[i] << "(" << count[i] << ")  ";
    }
    return 0;
}