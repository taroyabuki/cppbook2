#include <chrono>
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
using namespace std::chrono;

const int n = 4;
const int N = n * n;
const int s = N * (N + 1) / 2 / n;

void report(const vector<int>& x) {
  for (unsigned i = 0; i < x.size(); ++i) {
    cout << setw(3) << x[i];
    if ((i + 1) % n == 0) cout << endl;
  }
  cout << endl;
}

void skipafter(vector<int>& x, size_t pos) {
  auto p = find_if(x.begin() + static_cast<int>(pos) + 1, x.end(),
    [&](int i) { return i > x[pos]; });
  if (p != x.end()) {
    sort(x.rbegin(), x.rend() - static_cast<int>(pos) - 1);
  }
  else if (pos != 0) {
    skipafter(x, pos - 1);
  }
  else if (x[0] == N) {
    sort(x.rbegin(), x.rend() - 1);
  }
}

bool goal(vector<int>& x) {
  if (x[0] > x[3] || s != x[0] + x[1] + x[2] + x[3]) {
    skipafter(x, 3);
    return false;
  }
  if (s != x[4] + x[5] + x[6] + x[7]) {
    skipafter(x, 7);
    return false;
  }
  if (s != x[8] + x[9] + x[10] + x[11]) {
    skipafter(x, 11);
    return false;
  }
  if (x[3] > x[12]) {
    skipafter(x, 12);
    return false;
  }
  if (x[0] > x[15]) return false;

  if (//s != x[0] + x[1] + x[2] + x[3] ||
      //s != x[4] + x[5] + x[6] + x[7] ||
      //s != x[8] + x[9] + x[10] + x[11] ||
      s != x[12] + x[13] + x[14] + x[15] ||
      s != x[0] + x[4] + x[8] + x[12] ||
      s != x[1] + x[5] + x[9] + x[13] ||
      s != x[2] + x[6] + x[10] + x[14] ||
      s != x[3] + x[7] + x[11] + x[15] ||
      s != x[0] + x[5] + x[10] + x[15] ||
      s != x[3] + x[6] + x[9] + x[12])
    return false;
  return true;
}

int main() {
  auto t0 = high_resolution_clock::now();

  int counter = 0;
  int solutions = 0;
  vector<int> x;
  for (int i = 1; i <= N; ++i) x.push_back(i);
  do {
    ++counter;
    if (goal(x)) {
      ++solutions;
      report(x);
    }
  } while (next_permutation(x.begin(), x.end()));

  cout << "result: " << solutions << " / " << counter << endl;
  auto t1 = high_resolution_clock::now();
  cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << " sec.\n";
}