#pragma once

#include <iostream>
#include <vector>
#include <cmath>

//引数が素数かどうかを判定する
bool isPrime(int n) {
  if (n < 2) return false;//2未満なら素数ではない
  if (n == 2) return true;//2は素数

  for (int j = 2; j <= sqrt(n) + 1; ++j) {
    if (n % j == 0) return false;
  }
  return true;
}

//引数が素数かどうかを判定する（primesの最大値より大きく、最大値の2乗以下の数限定）
bool isPrime(int n, const std::vector<int>& primes) {
  for (int i : primes) {
    if (n % i == 0) return false;
  }
  return true;
}

//要素の最初と最後の10個を表示する
template<typename T>
void report(T first, T last) {
  const int num = 10;
  if (last - first < num) {//num個未満ならすべて表示
    for (T i = first; i != last; ++i) std::cout << *i << ", ";
  }
  else {
    for (T i = first; i != first + num; ++i) std::cout << *i << ", ";
    std::cout << std::endl;
    for (T i = last - num; i != last; ++i) std::cout << *i << ", ";
  }
  std::cout << std::endl;
}