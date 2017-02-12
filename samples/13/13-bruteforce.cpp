#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  vector<string> cards{ "A", "B", "C", "D", "E" };

  for (auto& p : cards) {
    for (auto& q : cards) {
      for (auto& r : cards) {
        cout << p << q << r << endl;
      }
    }
  }
}