 #include <iostream>
using namespace std;
void NhapGiam(float[], int&);
void output(float[], int);
void ThemBaoToan(float[], int&, float);
int main()
{
    int n;
    float a[1000];
    NhapGiam(a, n);
    output(a, n);
    return 0;
}

void NhapGiam(float a[], int& n)
{
    cout << "Nhap n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float x;
        cout << "Nhap a[" << i << "]: ";
        cin >> x;
        ThemBaoToan(a, i, x);
    }
}
void output(float a[], int n)
{
    cout << "\n Mang sau xu ly " << endl;
    for (int i = 0; i < n; i++)
        cout << "a[" << i << "]= " << a[i] << " ";
}

void ThemBaoToan(float a[], int& n, float x)
{
    int i = n - 1;
    while (i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    n++;
}