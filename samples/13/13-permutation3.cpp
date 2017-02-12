#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void permutation(const vector<string>& cards, vector<string>& result, unsigned n) {
  if (result.size() == n) {
    for (auto& i : result) cout << i;
    cout << endl;
  }
  else {
    for (auto& i : cards) {
      if (find(result.cbegin(), result.cend(), i) == result.cend()) {
        auto tmp = result;
        tmp.push_back(i);
        permutation(cards, tmp, n);
      }
    }
  }
}

int main() {
  vector<string> cards{ "A", "B", "C", "D", "E" };
  vector<string> result;
  permutation(cards, result, 3);
}