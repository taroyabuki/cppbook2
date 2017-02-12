#include <iostream>
#include <vector>
#include <algorithm>//sortのために必要
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5, 1, 4 };
  sort(v.begin(), v.end());
  for (auto i : v) cout << i << ", ";
  cout << endl;//出力値：1, 2, 3, 4, 5,

  int a[] = { 2, 3, 5, 1, 4 };
  sort(begin(a), end(a));
  //sort(a, end(a));//OK
  for (auto i : a) cout << i << ", ";
  cout << endl;//出力値：1, 2, 3, 4, 5,
}