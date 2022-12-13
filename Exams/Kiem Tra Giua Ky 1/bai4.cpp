#include<iostream>
using namespace std;
void nhap(int*& p, int& n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu:" << i + 1 << ": "; 
		cin >> p[i];
	}
}
void xuat(int* p, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
}
void sapxeptang(int* p, int n) {
	for (size_t i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++) {
			if (p[i]>p[j])
			{
				swap(p[i], p[j]);
			}
		}
	}
}
void sapxep(int*& p, int n) {
	sapxeptang(p, n);
	for (size_t i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++) {
			if ((p[i]>0 && p[j]>0) || (p[i]<0 && p[j]<0))
			{
				if (p[i] < p[j]) {
					swap(p[i], p[j]);
				}
			}
		}
	}
}
int main() {
	int* p;
	int n = 12;
	p = new int[n];
	nhap(p, n);
	sapxep(p, n);
	xuat(p, n);
	return 0;
}