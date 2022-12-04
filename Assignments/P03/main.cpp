/*
* Name: David Reyes-coy
* Class: 4883 Programming Techinques
* Problem: Rails 514
* Description: 
* - TrainA and TrainB. When trainA arrives at the station it has a specific order
* of coaches. ex(1,2,3,4,5), and when trainB departs from the station, it must follow
* that order. ex(5,4,3,2,1) in-order to result in a "Yes", if the order does not match.
* You will recieve a "No" as trainB departed in a different order. Store the trainA
* to an array, and push each index to a stack. Creating TrainB. push/pop the stack while
* Traversing the array matching the index to the top of the stack.
*/
#include <iostream>
#include <stack>

using namespace std;

int main(){
  int coachNumber = 0;

  while(cin >> coachNumber && coachNumber != 0){
    int coaches[coachNumber];
    while(cin >> coaches[0] && coaches[0]!= 0){
      int index = 0;
      stack<int> train;
      for(int i = 1; i < coachNumber; i++){
        cin >> coaches[i];
      }
      for(int j = 1; j <= coachNumber; j++){
        train.push(j);
        while(!train.empty() && coaches[index] == train.top()){
          index++;
          train.pop();
        }
      }
      if(train.empty())
        cout << "Yes\n";
      else
        cout << "No\n";
    }
    cout << '\n';
  }
  return 0;
}