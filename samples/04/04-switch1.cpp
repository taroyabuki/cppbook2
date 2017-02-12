#include <iostream>
using namespace std;

int main() {
  int n = 5;
  switch (n % 3) {
  case 0:
    cout << "3の倍数です。\n";
    break;
  case 1:
    cout << "3で割った余りは1です。\n";
    break;
  case 2:
    cout << "3で割った余りは2です。\n";
    break;
  default:
    cout << "何かがおかしいです。\n";
    break;
    //出力値：3で割った余りは2です。
  }
}