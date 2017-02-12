#include <iostream>
using namespace std;

int main() {
  size_t n = 5;
  int* a = new int[n] {2, 3, 5, 7, 11};

  //size_t size = end(a) - begin(a);      //NG
  //size_t size = sizeof(a) / sizeof(int);//NG

  //for (auto i : a) {}//拡張for文はNG

  for (size_t i = 0; i < n; ++i) cout << a[i] << ", ";
  cout << endl;//出力値：2, 3, 5, 7, 11, 

  delete[] a;
}