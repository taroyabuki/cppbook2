#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
  vector<int> v0{ 0, 1, 2, 1, 0, 2, 1 };

  vector<int> v1 = v0;
  sort(v1.begin(), v1.end());
  v1.erase(unique(v1.begin(), v1.end()), v1.end());
  for (auto i : v1) cout << i << ", ";
  cout << endl;//出力値：0, 1, 2, 

  set<int> s(v0.cbegin(), v0.cend());
  vector<int> v2(s.cbegin(), s.cend());
  for (auto i : v2) cout << i << ", "; 
  cout << endl;//出力例：0, 1, 2, 
}