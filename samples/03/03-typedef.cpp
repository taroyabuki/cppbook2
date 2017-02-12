#include <iostream>
using namespace std;

int main() {
  using real = double;//別名を付けておく
  real x = 0;         //常に別名を使う
  real y = 0;         //常に別名を使う
  cout << x << ", " << y << endl;
}