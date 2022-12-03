/*
* Name: David Reyes-coy
* Course: 4883 Programming Techniques
* Date: 09/09/2022
*/
#include <iostream>

using namespace std;

int main() {
  int testCase = 0;
  string numbers = "";

  cin >> testCase;

  while (testCase--) {
    cin >> numbers;
    if(numbers.length() > 3)
    {
      cout << "3\n";
    }
    else if(numbers[0] == 't' || numbers[1] == 'w'){
      cout << "2\n";
    }
    else
    {
      cout << "1\n";
    }
  }
}