#include <iostream>
using namespace std;

[[noreturn]]//戻らないことを示す属性（必須ではない）
void doSomething() {
  //throw exception("何か異常が起きた");//Visual C++ではOK
  //throw exception();//OK
  throw runtime_error("何か異常が起きた");
}

int main() {
  try {
    doSomething();
  }
  catch (exception& e) {
    cerr << e.what() << endl;//出力値：何か異常が起きた
  }
}