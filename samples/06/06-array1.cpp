#include <iostream>
using namespace std;

int main() {
  int a[5];
  //size_t n = 5; int a[n];//エラー（GNU C++やClangでは警告）
  
  a[0] = 2;
  a[1] = 3;
  a[2] = 5;
  a[3] = 7;
  a[4] = 11;
  
  int b[] = { 2, 3, 5, 7, 11 };
  size_t size = end(b) - begin(b);
  //size_t size = end(b) - b;             //OK
  //size_t size = sizeof(b) / sizeof(int);//OK
  cout << size << endl;//出力値：5

  for (auto i : a) cout << i << ", ";
  cout << endl;//出力値：2, 3, 5, 7, 11, 

  for (auto& i : a) i *= 2;

  for (size_t i = 0; i < 5; ++i) cout << a[i] << ", ";
  cout << endl;//出力値：2, 3, 5, 7, 11, 

  for (size_t i = 0; i < 5; ++i) cout << a[i] << ", ";
  cout << endl;//出力値：4, 6, 10, 14, 22, 
}