#include <thread>
#include "number.h"
using namespace std;

const int N = 100;//グローバル変数

//3の倍数+1となる数だけを調べる
void threadFuncA() {
  for (int n = 4; n <= N; n += 3) {
    if (isPrime(n)) {
      cout << n << ", ";
    }
  }
}

//3の倍数+2となる数だけを調べる
void threadFuncB() {
  for (int n = 5; n <= N; n += 3) {
    if (isPrime(n)) {
      cout << n << ", ";
    }
  }
}

int main() {
  cout << "2, 3, ";

  thread threadA(threadFuncA);
  thread threadB(threadFuncB);

  //スレッドの終了を待つ
  threadA.join();
  threadB.join();
  cout << endl;
}