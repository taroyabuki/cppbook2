#include <thread>
#include <mutex>
#include "number.h"
using namespace std;

const int N = 100;//グローバル変数にする
mutex m;//排他制御のためのオブジェクト

void threadFuncA() {
  for (int n = 4; n <= N; n += 3) {
    if (isPrime(n)) {
      unique_lock<mutex> lock(m);//mutexを獲得する
      cout << n << ", ";
    }//mutexを解放する
  }
}

void threadFuncB() {
  for (int n = 5; n <= N; n += 3) {
    if (isPrime(n)) {
      unique_lock<mutex> lock(m);//mutexを獲得する
      cout << n << ", ";
    }//mutexを解放する
  }
}

int main() {
  cout << "2, 3, ";

  thread threadA(threadFuncA);
  thread threadB(threadFuncB);

  threadA.join();
  threadB.join();
  cout << endl;
}