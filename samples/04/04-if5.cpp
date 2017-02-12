#include <iostream>
using namespace std;

int main() {
  int n = 9;
  if (n % 3 == 0)
    if (n % 2 == 0) cout << "nは3の倍数かつ偶数です。\n";
  else cout << "nは3の倍数ではありません。\n";
  //出力値：nは3の倍数ではありません。
}