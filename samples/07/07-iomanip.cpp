#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n = 123;
  cout << '[' << setw(5) << n << ']' << endl;//出力値：[  123]（5桁表示）
  cout << '[' << n << ']' << endl;           //出力値：[123]　（元に戻る）

  double x = 1. / 7.;
  cout << x << endl;       //出力値：0.142857（標準は6桁表示）
  cout << setprecision(10);//10桁表示に変更する
  cout << x << endl;       //出力値：0.1428571429
  cout << setprecision(6); //6桁表示に戻す
}