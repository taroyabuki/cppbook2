#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

template<typename T>
size_t binarySearch(T key, const vector<T>& v) {
  if (!is_sorted(v.cbegin(), v.cend())) {
    throw runtime_error("例外：ソートされていない");
  }
  size_t n = v.size();
  size_t low = 0;
  size_t high = n - 1;
  size_t mid;
  while (low <= high) {
    mid = low + (high - low) / 2;
    cout << low << ", " << mid << ", " << high << endl;
    assert(low <= mid && mid <= high);
    if (key < v[mid]) high = mid - 1;
    else if (key > v[mid]) low = mid + 1;
    else return mid;
  }
  return n;
}

int main() {
  try {
    size_t n = numeric_limits<int>::max() / 2 + 2;
    vector<char> v(n);//要素はすべて0
    char target = 1;  //1を探す
    size_t pos = binarySearch(target, v);
    if (pos == v.size()) cout << "見つからない\n";
    else {
      assert(v[pos] == target);
      cout << "v[" << pos << "] = " << v[pos] << endl;
    }
  }
  catch (exception& e) {
    cerr << e.what() << endl;
  }
  //出力値：見つからない
}