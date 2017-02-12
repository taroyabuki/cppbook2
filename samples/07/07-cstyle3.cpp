#include <iostream>
#include <string>
using namespace std;

void report(const char* cstr) {          //サイズは不要
  for (int i = 0; cstr[i] != '\0'; i++) {//文字列の終わりがわかる
    cout << '[' << i << "]: " << cstr[i] << endl;
  }
}

int main() {
  char cstr1[] = "hello";
  //Cスタイル文字列をstd::stringに変換する
  string str = cstr1;        //cstr1を使ってstd::stringを定義する
  cout << str.size() << endl;//出力値：5
  
  //std::stringをCスタイル文字列に変換する
  const char* cstr2 = str.c_str();
  report(cstr2);//出力値：07-cstyle2.cppの結果と同じ
}