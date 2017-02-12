#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
void myReverse(T first, T last) {
  while (first < last) {
    --last;
    auto tmp = *last;
    *last = *first;
    *first = tmp;
    ++first;
  }
  //while (first < last) swap(*(first++), *(--last));//OK
  //reverse(first, last);//OK
}

int main() {
  int a[] = { 2, 9, 4, 1, 5, 3 };
  myReverse(a, end(a));
  for (auto i : a) cout << i << ", ";
  cout << endl;//出力値：3, 5, 1, 4, 9, 2, 

  int b[] = { 3 };
  myReverse(b, end(b));
  for (auto i : b)  cout << i << ", ";
  cout << endl;//出力値：3, 
}