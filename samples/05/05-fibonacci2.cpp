#include <iostream>
using namespace std;

int fibonacci(int n) {
  int a;    //2つ前の数
  int b = 1;//1つ前の数
  int f = 1;//結果
  for (int i = 3; i <= n; ++i) {
    a = b;
    b = f;
    f = a + b;
  }
  return f;
}

int main() {
  //10番目までのフィボナッチ数を計算する
  for (int n = 1; n <= 10; ++n) {
    cout << "f(" << n << ") = " << fibonacci(n) << endl;
  }
}