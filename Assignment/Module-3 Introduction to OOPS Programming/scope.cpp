//3. Variable Scope
//o Write a program that demonstrates the difference between local and global
//variables in C++. Use functions to show scope.
//o Objective: Reinforce the concept of variable scope.
#include <iostream>
using namespace std;

int globalVar = 10;

void display() {
    int localVar = 5;

    cout << "Inside display() function:\n";
    cout << "Local variable = " << localVar << endl;
    cout << "Global variable = " << globalVar << endl;

    globalVar += 5;
}

int main() {
    cout << "Inside main() before calling display():\n";
    cout << "Global variable = " << globalVar << endl;

    display();

    cout << "\nInside main() after calling display():\n";
    cout << "Global variable = " << globalVar << endl;

    // Uncommenting the next line will cause an error, since localVar is not visible here
    // cout << "Local variable = " << localVar << endl;

    return 0;
}

