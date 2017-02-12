#include <iostream>
#include <vector>
using namespace std;

int total(const vector<vector<int>>& m) {
  int sum = 0;
  for (const auto& row : m) {
    for (const auto i : row) {
      sum += i;
    }
  }
  return sum;
}

int main() {
  vector<vector<int>> m{ {1, 2, 3}, {4, 5, 6} };
  cout << total(m) << endl;
}