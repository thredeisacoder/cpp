#include <iostream>
#include <vector>
using namespace std;

bool checkEqualFrequency(vector<int> inputArray)
{
    const int maxValue = 400000000; // Tối đa giá trị trong mảng
    vector<int> frequency(maxValue + 1, 0);

    for (int num : inputArray) {
        frequency[num]++;
    }

    int expectedCount = frequency[inputArray[0]];
    for (int num : inputArray) {
        if (frequency[num] != expectedCount) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> a = {1, 2, 3, 3};
    cout << boolalpha << checkEqualFrequency(a);
    return 0;
}
