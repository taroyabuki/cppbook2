#include <iostream>
using namespace std;

int main() {
  //算術演算子
  cout << (10 / 4) << endl;//出力値：2
  cout << (1 / 3)  << endl;//出力値：0
  cout << (10 % 4) << endl;//出力値：2

  cout << (1 + 2 * 3) << endl;//出力値：7

  cout << ((1 + 2) * 3) << endl;//出力値：9

  cout << (1 / 3) << endl;  //出力値：0
  cout << (1 / 3.0) << endl;//出力値：0.333333

  //比較演算子
  cout << (1 < 2) << endl;//出力値：1（trueを意味する）
  cout << (3 < 2) << endl;//出力値：0（falseを意味する）

  //論理演算子
  cout << (1 < 2 && 2 < 3) << endl;//出力値：1（trueを意味する）
  cout << (1 < 2 && 3 < 2) << endl;//出力値：0（falseを意味する）
  cout << (2 < 1 || 1 < 2) << endl;//出力値：1（trueを意味する）
  cout << (!(2 < 1))       << endl;//出力値：1（trueを意味する）

  cout << (1 < 2 && 0) << endl;//出力値：0（falseを意味する）
  cout << (0 || 1 < 2) << endl;//出力値：1（trueを意味する）

  //ビット演算子
  int a = 5, b = 3;       //2進数の101と011
  cout << (a & b) << endl;//出力値： 1（ビットごとの論理積）
  cout << (a | b) << endl;//出力値： 7（ビットごとの論理和）
  cout << (a ^ b) << endl;//出力値： 6（ビットごとの排他的論理和）
  cout << (~a)    << endl;//出力値：-6（1の補数つまりビットごとの否定）

  int c = 5;//（2進数の101）
  cout << (c >> 1) << endl;//出力値： 2（101を右に1ビットシフトすると10になる）
  cout << (c >> 2) << endl;//出力値： 1（101を右に2ビットシフトすると1になる）
  cout << (c << 1) << endl;//出力値：10（101を左に1ビットシフトすると1010になる）
  cout << (c << 2) << endl;//出力値：20（101を左に2ビットシフトすると10100になる）

  //代入演算子
  int d = 0;
  cout << (d = 5) << endl;//出力値：5（演算子の評価結果）
  cout << d       << endl;//出力値：5（演算子の副作用）

  int e, f;
  cout << (e = f = 5) << endl;//出力値：5（演算子の評価結果）
  cout << e << endl;          //出力値：5
  cout << f << endl;          //出力値：5

  int g = 0;
  g = 1.;//警告「'=' : 'double' から 'int' への変換です。データが失われる可能性があります。」
  cout << g << endl;//出力値：1

  int h = 0;
  h = static_cast<int>(1.);//警告は出ない
  //h = (int)1.;//OK
  //h = int(1.);//OK
  cout << h << endl;//出力値：1

  int i = 5;
  i += 5;
  cout << i << endl;//出力値：10

  //インクリメントとデクリメント
  int j = 5, k = 5;

  cout << (j++) << endl;//出力値：5
  cout << j << endl;    //出力値：6

  cout << (++k) << endl;//出力値：6
  cout << k << endl;    //出力値：6

  //条件演算子とコンマ演算子
  cout << (2 < 1 ? "ABC" : "DEF") << endl;//出力値：DEF

  int m = 0;
  cout << (m = 1, m + 2) << endl;//出力値：3

  //被演算子の評価順序
  int n = 1;
  n = --n / --n;
  cout << n << endl;
}