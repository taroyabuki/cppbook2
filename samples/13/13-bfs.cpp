#include <queue>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void report(const vector<int>& x) {
  for (auto i : x) cout << i;
  cout << endl;
}

void breadthFirstSearch(queue<vector<int>>& searching, const vector<int>& numbers) {
  while (!searching.empty()) {
    auto x = searching.front();//先頭要素の取得
    searching.pop();           //先頭要素の削除

    int sum = accumulate(x.cbegin(), x.cend(), 0);
    if (sum == 10) report(x);
    else if (sum < 10) {
      for (auto i : numbers) {
        auto nextX = x;
        nextX.push_back(i);
        searching.push(move(nextX));
      }
    }
  }
}

int main() {
  auto searching = queue<vector<int>>();
  searching.emplace();//空のvector<int>から始める
  breadthFirstSearch(searching, { 1, 2, 3, 4, 5 });
}