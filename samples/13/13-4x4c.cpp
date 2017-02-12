#include <chrono>
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <iomanip>
#define MAXMIN(i) int ux##i, un##i; setUnusedMaxMin(use, ux##i, un##i)
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

#ifdef _MSC_VER
inline void setUnusedMaxMin(const unsigned long used, int& ux, int& un) {
  unsigned long tmp = used ^ ((1 << (N + 1)) - 2);
  _BitScanReverse((unsigned long*)&ux, tmp);
  _BitScanForward((unsigned long*)&un, tmp);
}
#endif
#ifdef __GNUC__
inline void setUnusedMaxMin(const unsigned used, int& ux, int& un) {
  unsigned tmp = used ^ ((1 << (N + 1)) - 2);
  ux = 31 - __builtin_clz(tmp);
  un = __builtin_ctz(tmp);
}
#endif

int main() {
  auto t0 = std::chrono::high_resolution_clock::now();

int solutions = 0;
#pragma omp parallel for reduction (+:solutions)
for  (int x00 = 1;                                               x00 <= N - 3;                                           ++x00) {                   unsigned use  = 1 << x00;
for  (int x01 = 1;                                               x01 <= N;                                               ++x01) { if (!(use & (1 << x01))) { use ^= 1 << x01; MAXMIN(02);
for  (int x02 = max(un02, s - x00 - x01 - ux02);                 x02 <= min(ux02, s - x00 - x01 - x00 - 1);              ++x02) { if (!(use & (1 << x02))) { use ^= 1 << x02;
const int x03 = s - x00 - x01 - x02;                                                                                              if (!(use & (1 << x03))) { use ^= 1 << x03;
for  (int x04 = 1;                                               x04 <= N;                                               ++x04) { if (!(use & (1 << x04))) { use ^= 1 << x04;
for  (int x05 = 1;                                               x05 <= N;                                               ++x05) { if (!(use & (1 << x05))) { use ^= 1 << x05; MAXMIN(06);
for  (int x06 = max(un06, s - x04 - x05 - ux06);                 x06 <= min(ux06, s - x04 - x05 - un06);                 ++x06) { if (!(use & (1 << x06))) { use ^= 1 << x06;
const int x07 = s - x04 - x05 - x06;                                                                                              if (!(use & (1 << x07))) { use ^= 1 << x07; MAXMIN(08);
for  (int x08 = max(un08, s - x00 - x04 - ux08);                 x08 <= min(ux08, s - x00 - x04 - max(x03 + 1, un08));   ++x08) { if (!(use & (1 << x08))) { use ^= 1 << x08; MAXMIN(09);
for  (int x09 = max(un09, s - x01 - x05 - ux09);                 x09 <= min(ux09, s - x01 - x05 - un09);                 ++x09) { if (!(use & (1 << x09))) { use ^= 1 << x09; MAXMIN(10);
for  (int x10 = max(un10, s - min(x02 + x06, x08 + x09) - ux10); x10 <= min(ux10, s - max(x02 + x06, x08 + x09) - un10); ++x10) { if (!(use & (1 << x10))) { use ^= 1 << x10;
const int x11 = s - x08 - x09 - x10;                                                                                              if (!(use & (1 << x11))) { use ^= 1 << x11;
const int x12 = s - x00 - x04 - x08;                                                                if (s == x03 + x06 + x09 + x12 && !(use & (1 << x12))) { use ^= 1 << x12;
const int x13 = s - x01 - x05 - x09;                                                                                              if (!(use & (1 << x13))) { use ^= 1 << x13;
const int x14 = s - x02 - x06 - x10;                                                                                              if (!(use & (1 << x14))) { use ^= 1 << x14;
const int x15 = s - x12 - x13 - x14;         if (x00 < x15 && x15 <= N && s == x03 + x07 + x11 + x15 && s == x00 + x05 + x10 + x15 && !(use & (1 << x15))) {
  #pragma omp critical
  report({ x00, x01, x02, x03, x04, x05, x06, x07, x08, x09, x10, x11, x12, x13, x14, x15 });
  ++solutions;
}
use ^= 1 << x14; }
use ^= 1 << x13; }
use ^= 1 << x12; }
use ^= 1 << x11; }
use ^= 1 << x10; }}
use ^= 1 << x09; }}
use ^= 1 << x08; }}
use ^= 1 << x07; }
use ^= 1 << x06; }}
use ^= 1 << x05; }}
use ^= 1 << x04; }}
use ^= 1 << x03; }
use ^= 1 << x02; }}
use ^= 1 << x01; }}
}

  cout << "result: " << solutions << endl;
  auto t1 = std::chrono::high_resolution_clock::now();
  cout << std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count() / 1000. << " sec.\n";
  return 0;
}