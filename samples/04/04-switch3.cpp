#include <iostream>
using namespace std;

int main() {
  int n = 5;
  switch (n % 3) {
  case 0:
    cout << "3の倍数です。\n";
    break;
  case 1:
    /* FALLTHROUGH */
  case 2:
    cout << "3の倍数ではありません。\n";
    break;
    //出力：3の倍数ではありません。
  }
}