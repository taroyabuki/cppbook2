#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "Hello";
  //string str1("Hello");//OK
  cout << str1 << endl;//出力値：Hello

  string str2;//空文字列
  
  //コピー代入
  str2 = str1;
  cout << str2 << endl;//出力値：Hello

  //文字列の結合1（string + 文字列リテラル）
  str2 = str1 + ", World!";
  cout << str2 << endl;//出力値：Hello, World!

  //文字列の結合2（文字列リテラル + string）
  str2 = "ABCDEFG " + str1;
  cout << str2 << endl;//出力値：ABCDEFG Hello

  //文字列の結合3（string + string）
  cout << (str1 + str2) << endl;//出力値：HelloABCDEFG Hello

  //文字列の結合4（文字列リテラル + 文字列リテラル）
  //cout << ("Hello, " + "World!") << endl;//エラー
}