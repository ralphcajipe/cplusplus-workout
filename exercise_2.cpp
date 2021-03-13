#include <iostream>
using namespace std;
// **************************************************************************************
/** Problem
Use the variable x as you write this program. x will represent a positive integer. Write a program that determines if x is divisible by 5. If yes, print _ is divisible by 5, where the blank (_) is the value of x. If no, print _ is not divisible by 5, where the blank (_) is the value of x.

**Type Casting**
Use the `to_string(x)` function to type cast the variable `x` as a string.

Expected Output
If x is 50, then the output should be: 50 is divisible by 5.
If x is 37, then the output should be: 37 is not divisible by 5.

A single set of if and else statements can be used to solve this exercise. The real trick is remembering that modulo % is the correct operator to check for divisibility.
*/

int main(){

    int x;
    cout << "Enter integer: ";
    cin >> x;

    if (x % 5 == 0) { 
        cout << to_string(x) + " is divisible by 5";
    }
    else {
        cout << to_string(x) + " is not divisible by 5";
    }
    return 0;
}