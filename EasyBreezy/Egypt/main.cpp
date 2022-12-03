#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
  long int A, B, C;
  long int sum;
  
  while(cin >> A >> B >> C)
  {
    if(A > 0 && B > 0 && C > 0)
    {
      sum = A + B + C;
      if(A == B || B == C)
      {
        cout << "wrong\n";
      }
      else if(sum % 2 == 0)
      {
        cout << "right\n";
      }
      else
      {
        cout << "wrong\n";
      }
    }
  }
}