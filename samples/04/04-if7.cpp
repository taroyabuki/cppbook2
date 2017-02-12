#include <iostream>
using namespace std;

int main() {
  int n = 6;
  if (n % 3 == 0) cout << "nは3の倍数です。\n";       //出力値：nは3の倍数です。
  else if (n % 3 == 1) cout << "nは3の倍数+1です。\n";//条件は評価されない。
  else if (n % 3 == 2) cout << "nは3の倍数+2です。\n";//条件は評価されない。
}