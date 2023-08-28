#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int missingNumber(vector<int> arr)
{
    int min = arr[0];
    int sum1 = 0;
    for(int i = 0; i < arr.size(); i++){
        sum1 += arr[i];
        if(arr[i] < min){
            min = arr[i];
        }
        if(min < 2){
            min = 1;
        }
    }
    int sum = ((arr.size()+1) * (min + (arr.size() + 1)))/2;
    return sum - sum1;
}

int main(){
    vector<int> a = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    cout << missingNumber(a) << endl;
    return 0;
}


