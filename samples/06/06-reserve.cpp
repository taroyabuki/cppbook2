#include <iostream>
#include <vector>
using namespace std;

int main() {
  const int n = 20;

  vector<int> v1;
  for (int i = 0; i < n; ++i) {
    cout << v1.capacity() << ", ";
    v1.push_back(i);
  }
  cout << endl;
  //出力例：0, 1, 2, 3, 4, 6, 6, 9, 9, 9, 13, 13, 13, 13, 19, 19, 19, 19, 19, 19,

  vector<int> v2;
  v2.reserve(100);//100個分の領域の確保
  for (int i = 0; i < n; ++i) {
    cout << v2.capacity() << ", ";
    v2.push_back(i);
  }
  //出力例：100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,…
}