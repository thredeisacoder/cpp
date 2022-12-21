#include<iomanip>
#include<iostream>

using namespace std;

int main(){
    cout << setw(5) << left << "STT"; 
    cout << setw(20) << left << "Ho va ten";
    cout << setw(20) << left << "Gioi tinh";
    cout << setw(11) << right << "Que quan" << endl;

    cout << setfill('-');
    cout << setw(57) << "-" << endl;
    cout << setfill(' ');

    cout << setw(5) << left << "1";
    cout << setw(20) << left << "Nguyen Thi A";
    cout << setw(20) << left << "Nu";
    cout << setw(11) << right << "Ha Noi" << endl;

    cout << setw(5) << left << "2";
    cout << setw(20) << left << "Nguyen Van B";
    cout << setw(20) << left << "Nam";
    cout << setw(11) << right << "Da Nang" << endl;

    cout << setw(5) << left << "3";
    cout << setw(20) << left << "Huynh Van C";
    cout << setw(20) << left << "Nam";
    cout << setw(20) << left << "Ho Chi Minh" << endl;

    cout << setw(5) << left << "4";
    cout << setw(20) << left << "Phan Thi D";
    cout << setw(20) << left << "Nu";
    cout << setw(11) << right << "Ca Mau";

    cout << setfill('*') << endl; //print '*'
    cout << setw(57) << "*" << endl;
    
    return 0;
}