#include <iostream>
#include <vector>

bool checkEqualFrequency(std::vector<int> inputArray) {
    std::vector<int> freq(101, 0); // Khởi tạo một mảng tần suất xuất hiện ban đầu

    for (int num : inputArray) {
        freq[num]++; // Tăng tần suất xuất hiện cho phần tử num
    }

    int k = 0; // Biến lưu giá trị tần suất xuất hiện của phần tử đầu tiên

    for (int i = 1; i <= 100; i++) {
        if (freq[i] > 0) {
            k = freq[i];
            break;
        }
    }

    for (int i = 1; i <= 100; i++) {
        if (freq[i] > 0 && freq[i] != k) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<int> inputArray = {1, 2, 1};

    if (checkEqualFrequency(inputArray)) {
        std::cout << "Cac phan tu co tan suat xuat hien bang nhau.\n";
    } else {
        std::cout << "Cac phan tu khong co tan suat xuat hien bang nhau.\n";
    }
    return 0;
}
