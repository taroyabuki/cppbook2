#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5, 7 };

  v.pop_back();//末尾の削除
  for (auto x : v) cout << x << ", ";
  cout << endl;//出力値：2, 3, 5, 

  v.erase(v.begin() + 1);//1番目の要素の削除
  for (auto x : v) cout << x << ", ";
  cout << endl;//出力値：2, 5, 
}