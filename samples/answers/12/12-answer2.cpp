#include <thread>
#include <vector>
#include <algorithm>
#include <functional>
#include <chrono>
#include "number.h"
using namespace std;
using namespace std::chrono;

void threadFunc(int N, int start, vector<int>& primes) {
  for (int n = start; n <= N; n += 3) {
    if (isPrime(n)) {
      //unique_lock<mutex> lock(m);
      primes.push_back(n);
    }
  }
}

int main() {
  auto t0 = high_resolution_clock::now();

  const int N = 400000;

  vector<int> primesA{ 2, 3 };
  vector<int> primesB;

  thread threadA(threadFunc, N, 4, ref(primesA));
  thread threadB(threadFunc, N, 5, ref(primesB));

  threadA.join();
  threadB.join();

  size_t size = primesA.size() + primesB.size();
  cout << "素数の数：" << size << endl;

  primesA.reserve(size);//2つのvectorを結合する
  primesA.insert(primesA.end(), primesB.cbegin(), primesB.cend());

  sort(primesA.begin(), primesA.end());
  report(primesA.cbegin(), primesA.cend());

  auto t1 = high_resolution_clock::now();
  cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << " 秒\n";
}