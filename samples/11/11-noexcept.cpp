#include <iostream>
using namespace std;

[[noreturn]]//戻らないことを示す属性（必須ではない。）
void doSomething() noexcept {//例外は発生しないという宣言
  while (1) {                //にもかかわらず例外が発生する。
    int* p = new int[0x1fffffff];
    cout << p << endl;
  }
  //実行時強制終了（コンパイルエラーにはならない）
}

int main() {
  try {
    doSomething();
  }
  catch (...) {//任意の例外に対応する。
    cerr << "例外発生\n";//出力されない。
  }
}