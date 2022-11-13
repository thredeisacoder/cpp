#include <iostream>

using namespace std;

string So(long n){
    switch (n)
    {
        case 0:
            return "khong";
        case 1:
            return "mot";
        case 2:
            return "hai";
        case 3:
            return "ba";
        case 4:
            return "bon";
        case 5:
            return "nam";
        case 6:
            return "sau";
        case 7:
            return "bay";
        case 8:
            return "tam";
        case 9:
            return "chin";
    }
    return "";
}

string Doc_don_vi(long n){
    switch(n)
    {
        case 2:
            return "muoi";  //Bug !!!
        case 3:
            return "tram";
        case 4:
            return "ngan";
        case 5:
            return "muoi";  //Bug !!!
        case 6:
            return "tram";
        case 7:
            return "trieu";
        case 8:
            return "muoi";  //Bug !!!
        case 9:
            return "tram";
        case 10:
            return "ty";
    }
    return "";
}

int main(){
    long n;
    long temp;
    int location = 1;
    string Doc_so = "";
    do{
    cout << "Nhap n: ";
    cin >> n;
    }while(n < 0);
    if(n == 0){
        cout << "Khong";
    }
    while(n > 0){
        temp = n % 10;
        Doc_so = So(temp) + " " + Doc_don_vi(location) + " " + Doc_so;
        n = n / 10;
        location++;
    }
    cout << Doc_so;
    return 0;
}