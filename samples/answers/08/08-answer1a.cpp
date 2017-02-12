//標準出力とリダイレクトを使う方法
#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 1000; ++i) {
    cout << i << endl;
  }
}
/*
このファイルをコンパイルした結果が
C:/Users/ユーザ名/Documents/Visual Studio 2015/Projects/ConsoleApplication1/Debug/ConsoleApplication1.exeだとすると、
コマンドプロンプトで
C:
cd /Users/ユーザ名/Documents/Visual Studio 2015/Projects/ConsoleApplicatio
n1/Debug
ConsoleApplication1.exe > numbers.dat
を実行することで、目的のファイルを作成する。
*/