/*
4. WAP to read and print employee information using multiple inheritance.

Name: John Doe
Age: 27
Company:
Salary: $5000

*/
#include <iostream>
#include<string.h>
using namespace std;

class Person {
public:
    string name;
    int age;

public:
    void set_person_info(char empolyeename[100], int employeeage) {
        name = empolyeename;
        age = employeeage;
    }
};

class Employee {
public:
    char company[100];
    int salary;

public:
    void set_employee_info(char company[100], int empolyeesalary) {
        company = company;
        salary = empolyeesalary;
    }
};

class EmployeeInfo : public Person, public Employee {
public:
	void setdata(){
		cout<<"name is :-"<<endl;
		cout<<"age is :-"<<endl;
		cout<<"compny is :-"<<endl;
		cout<<"salary is :-"<<endl;
	}
    void getdata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Company: " << company << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    EmployeeInfo emp;

    emp.set_person_info("John Doe", 27);
    emp.set_employee_info("ABC Company", 5000.0);
    
    emp.getdata();


    return 0;
}
