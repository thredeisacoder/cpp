#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    int pos_neg = -1, pos_pos = -1;
    for (int i = 0; i < n; i++)
        if (a[i] < 0)
            pos_neg = i;
        else if (a[i] > 0)
        {
            pos_pos = i;
            break;
        }
    sort(a, a + pos_neg + 1, greater<int>());
    sort(a + pos_pos, a + n, greater<int>());
    for (int x : a)
        cout << x << " ";
    return 0;
}