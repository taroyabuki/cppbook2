#include <iostream>
using namespace std;

struct A {
  void doSomething() { cout << "Hello, World!\n"; }

  ~A() { cout << "Aオブジェクトは解体された\n"; }
};

struct Wrapper {
  A* pA;//Wrapperの中の、裸でないポインタ
  Wrapper() : pA(new A) {}
  ~Wrapper() { delete pA; }
};

int main() {
  Wrapper w;
  return 1;//処理の中断のシミュレーション
  w.pA->doSomething();
}//出力値：Aオブジェクトは解体された