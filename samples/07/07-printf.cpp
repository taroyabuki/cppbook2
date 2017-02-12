#include <cstdio>
using namespace std;

int main() {
  int x = 10;
  double y = 3.1415926535;
  printf("Hello, World!\n");      //出力値：Hello, World!
  printf("The value is %d.\n", x);//出力値：The value is 10.（整数）
  printf("%d %f\n", x, y);        //出力値：10 3.141593（複数の引数）
  printf("<%5d>\n", x);           //出力値：<   10>（桁数は5）
  printf("%.7f\n", y);            //出力値：3.1415927（小数点以下は7桁まで）
  printf("The address of x is %p.\n", static_cast<void*>(&x));
  //出力例：The address of x is 00DEFB28.
}