#include <iostream>
using namespace std;

void f1(int x)         { cout << ++x      << endl; }//xは引数のコピー

void f2(const int x)   { cout << x + 1    << endl; }//xは引数のコピー（変更不可）

void f3(int& x)        { cout << ++x      << endl; }//xは引数の参照

void f4(const int& x)  { cout << x + 1    << endl; }//xは引数の参照（変更不可）

void f5(int&& x)       { cout << ++x      << endl; }//xは引数の右辺値参照

void f6(const int&& x) { cout << x + 1    << endl; }//xは引数の右辺値参照（変更不可）

void f7(int* p)        { cout << ++(*p)   << endl; }//pはint型変数のアドレスのコピー

void f8(const int* p)  { cout << (*p) + 1 << endl; }//pはint型変数のアドレスのコピー（*pは変更不可）

int main() {
  int x1 = 100;
  f1(x1);                    //出力値：101
  cout << x1 << endl;        //出力値：100（変わっていない）
  f1(110);                   //出力値：111（リテラルもOK）

  int x2 = 200;
  f2(x2);                    //出力値：201
  cout << x2 << endl;        //出力値：200（変わっていない）
  f2(210);                   //出力値：211（リテラルもOK）

  int x3 = 300;
  f3(x3);                    //出力値：301
  cout << x3 << endl;        //出力値：301（変わっている）
  //f3(310);                 //エラー（リテラルはNG）

  int x4 = 400;
  f4(x4);                    //出力値：401
  cout << x4 << endl;        //出力値：400（変わっていない）
  f4(410);                   //出力値：411（リテラルもOK）

  int x5 = 500;
  f5(static_cast<int&&>(x5));//出力値：501
  cout << x5 << endl;        //出力値：501（変わっている）
  f5(510);                   //出力値：511（リテラルもOK）

  int x6 = 600;
  f6(static_cast<int&&>(x6));//出力値：601
  cout << x6 << endl;        //出力値：600（変わっていない）
  f6(610);                   //出力値：611（リテラルもOK）

  int x7 = 700;
  f7(&x7);                   //出力値：701
  f7(addressof(x7));         //出力値：702
  cout << x7 << endl;        //出力値：702（変わっている）
  //f7(nullptr);             //実行時エラー（リテラルはOKだが）
  
  int x8 = 800;
  f8(&x8);                   //出力値：801
  f8(addressof(x8));         //出力値：801
  cout << x8 << endl;        //出力値：800（変わっていない）
  //f8(nullptr);             //実行時エラー（リテラルはOKだが）
}