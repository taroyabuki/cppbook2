#include <iostream>
using namespace std;

int main() {
  int n = 5;
  if (n % 3 == 0) cout << "3の倍数です。\n";
  else if (n % 3 == 1) cout << "3で割った余りは1です。\n";
  else if (n % 3 == 2) cout << "3で割った余りは2です。\n";
  else cout << "何かがおかしいです。";
  //出力値：3で割った余りは2です。
}