#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

#define endl << '\n';
#define format cout << setprecision(4) << fixed;

int main() {
  map<string, int> theTrees;

  int T = 0;
  double hellaTrees = 0;
  string trees;
  cin >> T;
  //cin.ignore();
  getline(cin, trees);
  format 
  while (T) {
    while (getline(cin, trees) && !trees.empty()) {
      if (theTrees.find(trees) == theTrees.end()) {
        theTrees.insert(pair<string, int>(trees, 1));
        hellaTrees++;
      } else {
        theTrees.at(trees)++;
        hellaTrees++;
      }
    }
    for (pair<string, int> wood : theTrees) {
      cout << wood.first << " " << wood.second / hellaTrees * 100 endl;
    }
    T--;
    theTrees.clear();
    hellaTrees = 0;
    if(T >= 1) cout endl;    
  }
}
