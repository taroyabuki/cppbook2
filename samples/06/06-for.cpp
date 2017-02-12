#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5, 7 };

  for (int i = 0; i < 4; ++i) cout << v[i] << endl;

  size_t s = v.size();
  for (size_t i = 0; i < s; ++i) cout << v[i] << endl;

  for (auto x : v)  cout << x << endl;
  
  for (size_t i = 0; i < s; ++i) ++v[i];

  for (auto x : v) cout << x << endl;

  for (auto& x : v) ++x;

  for (auto x : v) cout << x << endl;
}