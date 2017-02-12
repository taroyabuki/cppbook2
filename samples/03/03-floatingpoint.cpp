#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
  double x = 0.1;
  double y = x + x + x + x + x + x + x + x + x + x;
  cout << (x == 1.) << endl;//出力値：0（等しくない）

  cout << setprecision(20);//小数点以下20桁まで表示する
  cout << y << endl;       //出力値：0.99999999999999988898

  cout << x << endl;//出力値：0.10000000000000000555

  cout << hexfloat;    //16進数で表示する
  cout << x << endl;   //出力値：0x1.999999999999a0000000p-4
  cout << defaultfloat;//元に戻す（10進数で表示する）

  double z = stod("0x1.999999999999ap-4");           //文字列をdoubleに変換する
  //double z = 0x1.999999999999ap-4;                 //GNU C++とClangのみ
  cout << (x == z ? "等しい" : "等しくない") << endl;//出力値：等しい

  double epsilon = 1e-10;
  cout << (abs(y - 1.) < epsilon ? "等しい" : "等しくない") << endl;
  //出力値：等しい

  double a = 9007199254740992;
  double b = a + 1;
  cout << (a == b ? "等しい" : "等しくない") << endl;//出力値：等しい
}