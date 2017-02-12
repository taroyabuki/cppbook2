#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> v{ {1, 2, 3}, {4, 5, 6 } };

  cout << v.size() << endl;   //出力値：2（行数）
  cout << v[0].size() << endl;//出力値：3（列数）

  cout << v[1][2] << endl;    //出力値：6（1行2列あるいは1, 2成分）

  for (size_t i = 0; i < v.size(); ++i) {
    for (size_t j = 0; j < v[i].size(); ++j) {
      cout << v[i][j] << ", ";
    }
    cout << endl;
  }
  /*出力値
  1, 2, 3,
  4, 5, 6,
  */

  for (const auto& row : v) {
    for (const auto& x : row) {
      cout << x << ", ";
    }
    cout << endl;
  }//出力値は上と同じ
}