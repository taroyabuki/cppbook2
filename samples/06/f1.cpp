#include <iostream>
using namespace std;

int a[] = { 123, 456 };//aの定義

int f1() { return a[0]; }

int main() {
  cout << "f1: " << f1() << endl;

  int f2();//関数宣言
  cout << "f2: " << f2() << endl;
}