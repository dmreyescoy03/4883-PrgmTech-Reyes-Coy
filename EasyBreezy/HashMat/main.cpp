/*
* Name: David Reyes-coy
* Course: 4883 Programming Techniques
* Date: 09/09/2022
* Description:
*  -Reads a line of input containing two numbers. It will calculate the 
* first number and the second number by preforming subtraction. it will
* then print the output to the screen.
*/


#include <iostream>

#define endl "\n"
#define sub1 A - B
#define sub2 B - A
#define push cout << result <<
using namespace std;

int main() {
    long long int B = 0, A = 0;
    long long int result = 0;
    
    while (cin >> A >> B) 
    {
      if(A > B)
      {
        result = sub1;
        push endl;
      }
      else
      {
        result = sub2;
        push endl;
      }
    }
    return 0;
}