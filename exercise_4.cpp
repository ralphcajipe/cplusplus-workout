#include <iostream>
using namespace std;
// **************************************************************************************
/** Problem
Use the variable x as you write this program. x will represent a string. Write a program that determines if x is a primary color (red, blue, or yellow). If yes, print _ is a primary color, where the blank (_) is the value of x. If no, print _ is not a primary color, where the blank (_) is the value of x. For this particular exercise, make sure that your code specifically checks if the variable x is equivalent to the strings red, blue, or yellow in all lowercase. Otherwise, your test cases will fail.

IMPORTANT
There is a difference between all of the following strings: "red", "Red", and "RED". When comparing strings, the system is case-sensitive and will attempt to match each character of the strings to each other based on whether it is uppercase or lowercase.

Expected Output
If x is red, then the output would be: red is a primary color.
If x is teal, then the output would be: teal is not a primary color.
*/

int main(){
    // One way is to use compound conditionals with if and else statements:
    string x = "teal";

    if ((x == "red") || (x == "blue") || (x == "yellow")) {
        cout << x + " is a primary color";
    }
    else {
        cout << x + " is not a primary color";
    }

    /** if and else statements are preferred over switch-case because we are working with strings, not numbers. If you wanted to use switch-case, you would need to find a way to translate the string input into a numerical value first, and then use that value as a case for your output. Here is an example:
    
    int num;
    if (x == "red") {
        num = 1;
    }
    else if (x == "blue") {
        num = 2;
    }
    else if (x == "yellow") {
        num = 3;
    }
    else {
        num = 0;
    }
    switch (num) {
    case 1: cout << x + " is a primary color"; break;
    case 2: cout << x + " is a primary color"; break;
    case 3: cout << x + " is a primary color"; break;
    default: cout << x + " is not a primary color";
  }
  */
}
