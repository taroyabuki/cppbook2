#include <iostream>
using namespace std;

int x;//グローバル変数（グローバル名前空間）

namespace nameA {
  int x = 1;
}

namespace nameB {
  int x = 2;
}

int main() {
  int x = 3;
  cout << x << endl;       //出力値：3（ローカル変数）
  cout << ::x << endl;     //出力値：0（グローバル名前空間）
  cout << nameA::x << endl;//出力値：1（名前空間nameA）
  cout << nameB::x << endl;//出力値：2（名前空間nameB）
}