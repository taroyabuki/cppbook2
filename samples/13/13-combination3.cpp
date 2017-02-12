#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void combination(const vector<string>& cards, vector<string>& result, unsigned n) {
  if (result.size() == n) {
    for (auto& i : result) cout << i;
    cout << endl;
  }
  else {
    vector<string>::const_iterator i;
    if (result.empty()) i = cards.cbegin();
    else i = find(cards.cbegin(), cards.cend(), result.back()) + 1;
    while (i != cards.end()) {
      auto tmp = result;
      tmp.push_back(*i);
      combination(cards, tmp, n);
      ++i;
    }
  }
}

int main() {
  vector<string> cards{ "A", "B", "C", "D", "E" };
  vector<string> result;
  combination(cards, result, 3);
}