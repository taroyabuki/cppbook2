#include <iostream>
using namespace std;

void sayHello(int times) {
  for (int i = 0; i < times; ++i) {
    cout << "Hello, World!\n";
  }
}

int main() {
  sayHello(5);//関数の呼び出し
}