#include <iostream>
using namespace std;

void sum(int &n, int *&save) {
    save = new int[n];
    int tmp = 0;
    int sum = 0;
    for (int i = 0; i <= n * 2; i++) {
        if (i % 2 == 1) {
            save[tmp++] = i;
            sum += i;
        }
    }
    
}

int main() {
    int n;
    cin >> n;
    int *save = nullptr;
    sum(n, save);
    for(int i = 0; i < n; i++) {
        cout << save[i] << " ";
    }
    delete[] save;
    return 0;
}
