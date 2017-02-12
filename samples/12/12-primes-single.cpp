#include <vector>
#include <chrono>
#include "number.h"
using namespace std;
using namespace std::chrono;

int main() {
  auto t0 = high_resolution_clock::now();

  const int N = 400000;

  vector<int> primes;//結果を格納するvector

  for (int n = 2; n <= N; ++n) {
    if (isPrime(n)) {     //素数なら
      primes.push_back(n);//vectorに追加する
    }
  }

  cout << "素数の数：" << primes.size() << endl;

  report(primes.cbegin(), primes.cend());

  auto t1 = high_resolution_clock::now();
  cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << " 秒\n";
}