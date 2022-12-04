#include <iostream>

using namespace std;

int main(){
  int numberHW = 0;
  int caseNumber = 0;
  int totalCases = 1;
  int count = 0;
  while(cin >> numberHW && numberHW > 0){
    caseNumber++;
    while (totalCases < numberHW) {
      totalCases+= totalCases;
      count++;
    }
    cout << "Case " << caseNumber << ": " << count << endl;
    totalCases = 1;
    count = 0;
  }
  return 0;
}