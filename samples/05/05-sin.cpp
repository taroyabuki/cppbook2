#include <iostream>
#include <cmath>//数学関数のために必要
using namespace std;

int main() {
  double x = 3.141;
  double y = sin(x);//xを引数として関数sin()を呼び出す
  cout << y << endl;//出力値：0.000592654
}