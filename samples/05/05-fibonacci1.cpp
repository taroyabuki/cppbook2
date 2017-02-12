#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n < 3) return 1;                       //再帰の終了条件
  return fibonacci(n - 1) + fibonacci(n - 2);//再帰呼び出し
}

int main() {
  //10番目までのフィボナッチ数を計算する
  for (int n = 1; n <= 10; ++n) {
    cout << "f(" << n << ") = " << fibonacci(n) << endl;
  }
}