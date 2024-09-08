#include<iostream>
using namespace std;

int main()
{ 
    // Arithmetic operators
    int num1 = 11;
    int num2 = 12;
    
    cout << num1 + num2 << endl; // addition
    cout << num1 - num2 << endl; // subtraction
    cout << num1 * num2 << endl; // multiplication
    cout << num1 / num2 << endl; // division (integer division)
    cout << num1 % num2 << endl; // modulus

    // Relational operators
    cout << (num1 == num2) << endl; // equality
    cout << (num1 != num2) << endl; // inequality
    cout << (num1 >= num2) << endl; // greater than or equal to

    // Assignment operators
    num1 += 9;
    cout << num1 << endl;
    num2 -= 6;
    cout << num2 << endl;
    
    // Logical operators
    bool exp1 = true;
    bool exp2 = false;

    cout << (exp1 && exp2) << endl; // logical AND
    cout << (exp1 || exp2) << endl; // logical OR
    cout << (!exp1) << endl; // logical NOT

    // Conditional operator
    int a = 3;
    cout << sizeof(a) << endl; // size of integer variable

    char name = 'a';
    cout << sizeof(name) << endl; // size of char variable

    bool flag;
    flag = (a == name) ? true : false;
    cout << flag << endl;

    // Increment and Decrement operator
    int c = 5;
    cout << (c++) << endl; // post-increment
    int b = 4;
    cout << (--b) << endl; // pre-decrement

    // Bitwise operators
    cout << (num1 << 1) << endl; // left shift
    cout << (num1 >> 1) << endl; // right shift

    cout << (num1 & num2) << endl; // bitwise AND
    cout << (num1 | num2) << endl; // bitwise OR

    return 0;
}
