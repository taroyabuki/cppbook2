#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 5; ++i) {
    if (i == 2) break;
    cout << "Hello, World!\n";
  }
}