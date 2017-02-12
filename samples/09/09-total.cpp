#include <iostream>
#include <vector>
#include <list>
#include <numeric>
using namespace std;

template <typename T>
int total(T first, T last) {
  int sum = 0;
  for (T p = first; p != last; ++p) sum += *p;
  return sum;
}

int main() {
  vector<int> v{ 1, 2, 3, 4, 5 };
  cout << total(v.begin(), v.end()) << endl;          //出力値：15
  cout << accumulate(v.begin(), v.end(), 0) << endl;  //出力値：15

  int a[] = { 1, 2, 3, 4, 5 };
  cout << total(a, end(a)) << endl;                   //出力値：15
  cout << accumulate(a, end(a), 0) << endl;           //出力値：15

  list<int> li{ 1, 2, 3, 4, 5 };
  cout << total(li.begin(), li.end()) << endl;        //出力値：15
  cout << accumulate(li.begin(), li.end(), 0) << endl;//出力値：15
}