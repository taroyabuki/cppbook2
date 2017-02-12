#include <iostream>
#include <cassert>//assertのために必要

int main() {
  int low, mid, high;

  //何らかの理由でmid > highになってしまったとする
  low = 0;
  mid = 10;
  high = 5;

  assert(low <= mid && mid <= high);
  std::cout << "正常終了\n";//出力されない
}