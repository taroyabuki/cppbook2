#include <iostream>
using namespace std;

int main() {
  int n, divisors;

  //10の約数を数える
  n = 10;
  divisors = 0;//約数を数えるための変数
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) ++divisors;//割り切れたら数を増やす
  }
  cout << n << "の約数の数：" << divisors << endl; //出力値：10の約数の数：4
  
  //12の約数を数える
  n = 12;
  divisors = 0;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) ++divisors;
  }
  cout << n << "の約数の数：" << divisors << endl; //出力値：12の約数の数：6
}