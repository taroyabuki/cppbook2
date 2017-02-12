#include <vector>
#include <chrono>
#include <algorithm>//修正点1
#include "number.h"
using namespace std;
using namespace std::chrono;

int main() {
  auto t0 = high_resolution_clock::now();

  const int N = 400000;

  vector<int> primes;

  #pragma omp parallel                              //修正点2
  #pragma omp for schedule(dynamic, 1000)           //修正点3
  //#pragma omp parallel for schedule(dynamic, 1000)//1行にまとめてもOK
  for (int n = 2; n <= N; ++n) {
    if (isPrime(n)) {
      #pragma omp critical//修正点4
      primes.push_back(n);
    }
  }

  cout << "素数の数：" << primes.size() << endl;

  sort(primes.begin(), primes.end());//修正点5
  report(primes.cbegin(), primes.cend());

  auto t1 = high_resolution_clock::now();
  cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << " 秒\n";
}