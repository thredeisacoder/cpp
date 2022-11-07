#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    int i = 1;
    cin >> n;
    string mem= "It's joke!";
    while(i <= n){
        int temp;
        cin >> temp;
        if(temp == 42){
            mem= "I've found meaning of life!";
        }
        i++;
    }
    cout << mem;
    return 0;
}
