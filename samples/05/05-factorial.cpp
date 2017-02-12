#include <iostream>
using namespace std;

int factorial(int n) {
  if (n < 2) return 1;        //再帰の終了条件
  return n * factorial(n - 1);//再帰呼び出し
}

int main() {
  //1から15までの整数の階乗を計算する
  for (int n = 1; n <= 15; ++n) {
    cout << "f(" << n << ") = " << factorial(n) << endl;
  }
}