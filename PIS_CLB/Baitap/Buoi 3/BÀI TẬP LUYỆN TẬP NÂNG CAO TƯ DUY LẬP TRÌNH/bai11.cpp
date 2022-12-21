// #include <iostream>

// using namespace std;

// int main(){
//     int n,
//         temp = 0,
//         array[1000],
//         max = 0,
//         reverse = 0,
//         result = 0;
//     do{
//         cout << "Nhap n: ";
//         cin >> n;
//     }while(n <= 0);
//     for(int i = 0; i <= n; i++){
//         temp = n % 10;
//         array[i]= temp;
//         for(int j = 0; j <= n; j++){
//             if(array[i] > array[j]){
//                 array[i] = reverse;
//                 reverse = array[j];
//                 array[j] = array[i];
//             }
//             result = result * 10 + array[j];
//         }
//         n /= 10;
//     }
//     cout << "So lon nhat la: " << reverse;
//     return 0;
// }