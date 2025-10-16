//Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
//operators. Perform operations using each type of operator and display the results.
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

       cout << "---- ARITHMETIC OPERATORS ----" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl << endl;

   
    cout << "---- RELATIONAL OPERATORS ----" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl << endl;

    
    bool x = true, y = false;
    cout << "---- LOGICAL OPERATORS ----" << endl;
    cout << "(x && y) : " << (x && y) << endl;   // AND
    cout << "(x || y) : " << (x || y) << endl;   // OR
    cout << "(!x) : " << (!x) << endl;           // NOT
    cout << "(!y) : " << (!y) << endl << endl;

    cout << "---- BITWISE OPERATORS ----" << endl;
    cout << "a & b  = " << (a & b) << endl;   // Bitwise AND
    cout << "a | b  = " << (a | b) << endl;   // Bitwise OR
    cout << "a ^ b  = " << (a ^ b) << endl;   // Bitwise XOR
    cout << "~a     = " << (~a) << endl;      // Bitwise NOT
    cout << "a << 1 = " << (a << 1) << endl;  // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl;  // Right shift

}

