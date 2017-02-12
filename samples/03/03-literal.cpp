#include <iostream>
using namespace std;

int main() {
  cout << 0b11111 << endl;//出力値：31    （ 2進リテラル）
  cout << 010     << endl;//出力値：8     （ 8進リテラル）
  cout << 10 - 1  << endl;//出力値：9     （10進リテラル）
  cout << 0x10    << endl;//出力値：16    （16進リテラル）
  cout << 123'456 << endl;//出力値：123456（区切り記号）
}