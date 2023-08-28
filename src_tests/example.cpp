#include <iostream>

using namespace std;

class Employee {
private:
	string first_name;
	string last_name;
public:
	Employee() {
		
	}
	Employee(string first_name, string last_name) {
		this->first_name = first_name;
		this->last_name = last_name;
	}
	friend istream &read(istream &, Employee &);
	friend ostream &print(ostream &, const Employee &);
	
};

istream &read(istream &in, Employee &a) {
	cout << "Enter first name: ";
	getline(in, a.first_name);
	cout << "Enter last name: ";
	getline(in, a.last_name);
	return in;
}

ostream &print(ostream &out, const Employee &a) {
	out << a.first_name << ' ' << a.last_name << endl;
	return out;
}

class Department {
private:
	string dept_name;
	Employee* list_employees=NULL;
	unsigned n;
public:
	Department() {
		
	}
	Department(string dept_name, unsigned n) {
		this->dept_name = dept_name;
		this->n=n;
		// ... 
		
	}
	Department(const Department &dept2) {
		this->dept_name = dept2.dept_name;
		this->n = dept2.n;
		this->list_employees = new Employee[n];
		for (int i = 0; i < n; i++) {
    		this->list_employees[i] = dept2.list_employees[i];
		}
	}
	
	Department& operator = (const Department &d) {
		dept_name = d.dept_name;
		n = d.n;
		//delete[] list_employees;
        list_employees = new Employee[n];
        for (int i = 0; i < n; i++) {
            list_employees[i] = d.list_employees[i];
        }
		return *this;
	}
	friend istream &read2(istream &, Department &);
	friend ostream &print2(ostream &, const Department &);
	~Department() {
		
		delete[] list_employees;
	};
	
};

istream &read2(istream &in, Department &d) {
	cout << "Enter dept name: ";
	getline(in, d.dept_name);
	cout << "The number of employee: ";
	in >> d.n;
	in.ignore();
	
	d.list_employees = new Employee[d.n];
    for (int i = 0; i < d.n; i++) {
    	cout << "Enter employee #" << i + 1 << endl;
        read(in, d.list_employees[i]);
    }
	return in;
}

ostream &print2(ostream &out, const Department &d) {
	for (int i = 0; i < d.n; i++) {
		cout << "Employee #" << i + 1 << ": ";
		print(out, d.list_employees[i]);
	}
	return out;
}

int main() {
//	cout << "Enter a employee: \n";
//	Employee e;
//	read(cin, e);
//	print(cout, e);
//	
	cout << "Department: \n";
	Department d;
	read2(cin, d);
	print2(cout, d);
	
	cout << "Department #2: \n";
	Department d2;
	d2 = d;
	//read2(cin, d2);
	print2(cout, d2);
	return 0;
}