#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void report(const vector<int>& x) {
  for (auto i : x) cout << i;
  cout << endl;
}

void depthFirstSearch(const vector<int>& x, const vector<int>& numbers) {
  int sum = accumulate(x.cbegin(), x.cend(), 0);
  if (sum == 10) report(x);
  else if (sum < 10) {
    for (auto i : numbers) {
      auto next = x;
      next.push_back(i);
      depthFirstSearch(next, numbers);
    }
  }
}

int main() {
  depthFirstSearch({}, { 1, 2, 3, 4, 5 });
}