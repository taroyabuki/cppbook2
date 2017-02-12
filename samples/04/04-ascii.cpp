#include <iostream>
using namespace std;

int main() {
  cout << " | 0 1 2 3 4 5 6 7 8 9 A B C D E F\n";//1行目
  cout << "-|--------------------------------\n";//2行目

  //3行目以降
  char ch = 0x20;                 //表の最初の文字（半角スペース）
  for (int i = 2; i <= 7; ++i) {  //行を処理
    cout << i << '|';             //16の位を表示
    for (int j = 0; j < 16; ++j) {//列を処理
      cout << ' ' << ch++;        //文字を表示し、chをインクリメントする
    }
    cout << endl;                 //1行書くごと改行
  }
}