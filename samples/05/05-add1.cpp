#include <iostream>
using namespace std;

int add1(int x) {
  return x + 1;
}

int main() {
  int result = add1(1);
  cout << result << endl;//出力値：2
}