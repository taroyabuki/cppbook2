#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char cstr[] = "hello";                      //Cスタイルの文字列
  cstr[0] = 'H';                              //配列の要素にアクセスする
  cout << cstr << endl;                       //出力値：Hello
  size_t size = end(cstr) - begin(cstr);      //要素数を求める
  //size_t size = sizeof(cstr) / sizeof(char);//OK
  cout << size << endl;                       //出力値：6（5ではない）
  cout << strlen(cstr) << endl;               //出力値：5
}