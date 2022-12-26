#include<iostream>

using namespace std;

struct Student {
	string name;
    int age;
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
	int n;
    cin >> n;
	Student students[100];
	for (int i = 0; i < n; i++){
        cin >> students[i].name >> students[i].age;
    }
	for (int i = 0; i < n; i++) {
		students[i].display();
	}
	return 0;
}