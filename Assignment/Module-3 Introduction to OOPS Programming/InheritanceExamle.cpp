//3. Inheritance Example
//o Write a program that implements inheritance using a base class Person and derived
//classes Student and Teacher. Demonstrate reusability through inheritance.
//o Objective: Learn the concept of inheritance.
#include <iostream>
#include <string>
using namespace std;

class Person {
	protected:
    string name;
    int age;

	public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void showPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
	private:
    string course;
    int rollNo;

	public:
    void setStudentDetails(string n, int a, string c, int r) {
        setPersonDetails(n, a);  
        course = c;
        rollNo = r;
    }

    void showStudentDetails() {
        cout << "\n--- Student Details ---\n";
        showPersonDetails();  
		cout << "Course: " << course << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

class Teacher : public Person {
	private:
    string subject;
    double salary;

	public:
    void setTeacherDetails(string n, int a, string s, double sal) {
        setPersonDetails(n, a);
		subject = s;
        salary = sal;
    }

    void showTeacherDetails() {
        cout << "\n--- Teacher Details ---\n";
        showPersonDetails();
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s1;
    Teacher t1;

    s1.setStudentDetails("Rushi Pathak", 21, "Computer Engineering", 101);
    t1.setTeacherDetails("Dr. Sharma", 45, "Data Structures", 75000);

    s1.showStudentDetails();
    t1.showTeacherDetails();

    return 0;
}

