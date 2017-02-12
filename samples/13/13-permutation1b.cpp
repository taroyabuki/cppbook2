#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  vector<string> cards{ "A", "B", "C", "D", "E" };

  do {
    for (auto i : cards) cout << i;
    cout << endl;
  } while (next_permutation(cards.begin(), cards.end()));
}