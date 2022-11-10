#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void Nhap(string&, float&, float&);
void Xuly(float&, float, float&);
void Xuat(string, float, float, float);
int main()
{
    string Hoten;
    float Diemtoan;
    float Diemvan;
    float DTB;
    void Nhap(string& Hoten, float& Diemtoan, float& Diemvan);
    float Xuly(float Diemtoan, float Diemvan, float& DTB);
    void Xuat(string Hoten, float Diemtoan, float Diemvan, float DTB);
    return 0;
}
void Nhap(string& Hoten, float& Diemtoan, float& Diemvan)
{
    cout << "nhap ho ten : " << endl;
    getline(cin, Hoten);
    cout << " Nhap diem toan: " << endl;
    cin >> Diemtoan;
    cout << " Nhap diem van: " << endl;
    cin >> Diemvan;
}
float Xuly(float Diemtoan, float Diemvan, float& DTB)
{
    return DTB = float((Diemtoan + Diemvan) / 2);
}
void xuat(string Hoten, float Diemtoan, float Diemvan, float DTB)
{
    cout << " Ho ten la" << endl << Hoten;
    cout << "diem toan:" << endl << Diemtoan;
    cout << "diem van:" << endl << Diemvan;
    cout << " diem trung binh la: " << endl << DTB;
}