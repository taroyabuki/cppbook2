#include <iostream>
#include <iomanip>//setw()のために必要
using namespace std;

int main() {
  for (int i = 1; i < 10; ++i) {  //行を数える
    for (int j = 1; j < 10; ++j) {//列を数える
      cout << setw(3) << i * j;   //i*jを3文字分で表示
    }
    cout << endl;                 //1行書く毎に改行
  }
}