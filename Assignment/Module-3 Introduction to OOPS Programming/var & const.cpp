//Variables and Constants
//o Write a C++ program that demonstrates the use of variables and constants. Create
//variables of different data types and perform operations on them.
//o Objective: Understand the difference between variables and constants.
#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159; 


    int a = 10;
    float b = 5.5;
    double c = 12.3456;
    char grade = 'A';
    string name = "Rushi";


    int sum = a + 5;
    float product = a * b;
    double division = c / 2;

    float circleArea = PI * b * b;

    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Sum (a + 5): " << sum << endl;
    cout << "Product (a * b): " << product << endl;
    cout << "Division (c / 2): " << division << endl;
    cout << "Area of circle with radius " << b << ": " << circleArea << endl;

}

