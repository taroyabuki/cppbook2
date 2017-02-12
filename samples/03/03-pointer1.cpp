#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int* pA = &a;          //ポインタをaのアドレスで初期化
  //int* pA = addressof(a);//OK
  *pA = 20;              //ポインタを使ってaの値にアクセス
  cout << a << endl;     //出力値：20
}