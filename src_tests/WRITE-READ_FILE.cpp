#include <iostream>
#include <fstream>
using namespace std;

void writeToFile(string filename, string message) {
    ofstream outfile;
    outfile.open(filename);

    if (outfile.is_open()) {
        outfile << message << endl;
        outfile.close();
        cout << "Successfully wrote to file." << endl;
    } else {
        cout << "Error: Unable to open file." << endl;
    }
}

int main() {
    string filename = "example.txt";
    string message = "Hello, world!";

    writeToFile(filename, message);

    return 0;
}
