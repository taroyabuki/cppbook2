#include <chrono>
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <bitset>
using namespace std;

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

int main() {
  auto t0 = std::chrono::high_resolution_clock::now();

int solutions = 0;
#pragma omp parallel for reduction (+:solutions)
for  (int x00 = 1;                                             x00 <= N - 3;                                     ++x00) { bitset<N + 1> use;                           use.flip(static_cast<unsigned>(x00));
for  (int x01 = 1;                                             x01 <= N;                                         ++x01) { if (!use.test(static_cast<unsigned>(x01))) { use.flip(static_cast<unsigned>(x01));
for  (int x02 = max(1, s - x00 - x01 - N + 1);                 x02 <= min(N, s - x00 - x01 - x00 - 1);           ++x02) { if (!use.test(static_cast<unsigned>(x02))) { use.flip(static_cast<unsigned>(x02));
const int x03 = s - x00 - x01 - x02;                                                                                      if (!use.test(static_cast<unsigned>(x03))) { use.flip(static_cast<unsigned>(x03));
for  (int x04 = 1;                                             x04 <= N;                                         ++x04) { if (!use.test(static_cast<unsigned>(x04))) { use.flip(static_cast<unsigned>(x04));
for  (int x05 = 1;                                             x05 <= N;                                         ++x05) { if (!use.test(static_cast<unsigned>(x05))) { use.flip(static_cast<unsigned>(x05));
for  (int x06 = max(1, s - x04 - x05 - N);                     x06 <= min(N, s - x04 - x05 - 1);                 ++x06) { if (!use.test(static_cast<unsigned>(x06))) { use.flip(static_cast<unsigned>(x06));
const int x07 = s - x04 - x05 - x06;                                                                                      if (!use.test(static_cast<unsigned>(x07))) { use.flip(static_cast<unsigned>(x07));
for  (int x08 = max(1, s - x00 - x04 - N);                     x08 <= min(N, s - x00 - x04 - x03 - 1);           ++x08) { if (!use.test(static_cast<unsigned>(x08))) { use.flip(static_cast<unsigned>(x08));
for  (int x09 = max(1, s - x01 - x05 - N);                     x09 <= min(N, s - x01 - x05 - 1);                 ++x09) { if (!use.test(static_cast<unsigned>(x09))) { use.flip(static_cast<unsigned>(x09));
for  (int x10 = max(1, s - min(x02 + x06, x08 + x09) - N);     x10 <= min(N, s - max(x02 + x06, x08 + x09) - 1); ++x10) { if (!use.test(static_cast<unsigned>(x10))) { use.flip(static_cast<unsigned>(x10));
const int x11 = s - x08 - x09 - x10;                                                                                      if (!use.test(static_cast<unsigned>(x11))) { use.flip(static_cast<unsigned>(x11));
const int x12 = s - x00 - x04 - x08;                                                        if (s == x03 + x06 + x09 + x12 && !use.test(static_cast<unsigned>(x12))) { use.flip(static_cast<unsigned>(x12));
const int x13 = s - x01 - x05 - x09;                                                                                      if (!use.test(static_cast<unsigned>(x13))) { use.flip(static_cast<unsigned>(x13));
const int x14 = s - x02 - x06 - x10;                                                                                      if (!use.test(static_cast<unsigned>(x14))) { use.flip(static_cast<unsigned>(x14));
const int x15 = s - x12 - x13 - x14; if (x00 < x15 && x15 <= N && s == x03 + x07 + x11 + x15 && s == x00 + x05 + x10 + x15 && !use.test(static_cast<unsigned>(x15))) {
  #pragma omp critical
  report({ x00, x01, x02, x03, x04, x05, x06, x07, x08, x09, x10, x11, x12, x13, x14, x15 });
  ++solutions;
}
use.flip(static_cast<unsigned>(x14)); }
use.flip(static_cast<unsigned>(x13)); }
use.flip(static_cast<unsigned>(x12)); }
use.flip(static_cast<unsigned>(x11)); }
use.flip(static_cast<unsigned>(x10)); }}
use.flip(static_cast<unsigned>(x09)); }}
use.flip(static_cast<unsigned>(x08)); }}
use.flip(static_cast<unsigned>(x07)); }
use.flip(static_cast<unsigned>(x06)); }}
use.flip(static_cast<unsigned>(x05)); }}
use.flip(static_cast<unsigned>(x04)); }}
use.flip(static_cast<unsigned>(x03)); }
use.flip(static_cast<unsigned>(x02)); }}
use.flip(static_cast<unsigned>(x01)); }}
}

  cout << "result: " << solutions << endl;
  auto t1 = std::chrono::high_resolution_clock::now();
  cout << std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count() / 1000. << " sec.\n";
  return 0;
}