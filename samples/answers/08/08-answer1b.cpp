//ファイル出力を使う方法
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream outfile("numbers.dat");
  for (int i = 1; i <= 1000; ++i) {
    outfile << i << endl;
  }
}
/*
このプログラムを実行すると、
C:/Users/ユーザ名/Documents/Visual Studio 2015/Projects/ConsoleApplication1/ConsoleApplication1
に、目的のファイルnumbers.datが作成される。
*/