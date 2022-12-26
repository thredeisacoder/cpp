#include<iostream>

using namespace std;

struct Student {
	string name;
    int age;
    int score;
};

int main() {
	int n;
	cin >> n;
	Student *students = new Student[100];
	for (int i = 0; i < n; i++){
        cin >> students[i].name >> students[i].age >> students[i].score;
    }
    Student max = students[0];
    for(int i = 0; i < n; i++){
        if(students[i].score > max.score){
            max.score = students[i].score;
        }
    }
    cout << "Name: " << max.name << endl;
    cout << "Age: " << max.age << endl;
    cout << "Score: " << max.score;
    delete[] students;
	return 0;
}