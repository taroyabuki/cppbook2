#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  vector<string> cards { "A", "B", "C", "D", "E" };
  auto size = cards.size();
  unsigned p, q, r;

  for (p = 0; p < size; ++p) {
    for (q = p + 1; q < size; ++q) {
      for (r = q + 1; r < size; ++r) {
        cout << cards[p] << cards[q] << cards[r] << endl;
      }
    }
  }
}