#include <iostream>
using namespace std;
// **************************************************************************************
/** Problem
Use the variable x as you write this program. x will represent a positive integer. Write a program that determines if x is between 0 and 25 or between 75 and 100. If yes, print the message:_ is between 0 and 25 or 75 and 100, where the blank (_) will be the value of x. The program should do nothing if the value of x does not fit into either ranges.

Note: These are inclusive ranges - meaning if x is 0, 25, 75, or 100, the program should print out the message.

**Type Casting**
Use the `to_string(x)` function to type cast the 
 variable `x` as a string.

Expected Output
If x is 8, then the output should be: 8 is between 0 and 25 or 75 and 100.
If x is 80, then the output should be: 80 is between 0 and 25 or 75 and 100.
If x is 100, then the output should be: 100 is between 0 and 25 or 75 and 100.
*/
// **************************************************************************************
int main(){

    int x;
    cout << "Enter integer: ";
    cin >> x;

    if ((x >= 0) && (x <= 25)) { 
        cout << to_string(x) + " is between 0 and 25 or 75 and 100"; 
    }   
    else if ((x >= 75) && (x <= 100)) {
        cout << to_string(x) + " is between 75 and 100";
    }
    else {
        cout << "Number is not found in ranges";
    }
    return 0;
}

/** Here is a sample solution using a single if statement and compound conditionals:
    if (((x >= 0) && (x <= 25)) || ((x >= 75) && (x <= 100))) { 
  cout << to_string(x) + " is between 0 and 25 or 75 and 100"; 
}
*/

/** 
    if ((x >= 0) && (x <= 25)) { 
        cout << to_string(x) + " is between 0 and 25 or 75 and 100"; 
    }
    if ((x >= 75) && (x <= 100)) {
        cout << to_string(x) + " is between 0 and 25 or 75 and 100";
    }
*/