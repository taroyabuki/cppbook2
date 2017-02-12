#include <iostream>
#include <memory>
using namespace std;

void f(int* a, size_t size) {
  for (size_t i = 0; i < size; ++i) {
    cout << a[i] << ", ";
  }
  cout << endl;
}

int main() {
  int a[] = { 2, 3, 5, 7, 11 };
  size_t size = end(a) - begin(a);
  f(a, size);//出力値：2, 3, 5, 7, 11, 
}