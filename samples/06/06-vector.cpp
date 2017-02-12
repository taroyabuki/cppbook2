#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v1; //空のvectorを構築する
  v1.push_back(2);//要素を追加していく
  v1.push_back(3);
  v1.push_back(5);
  v1.push_back(7);

  vector<int> v2(4);//要素数4のvectorを構築する
  v2[0] = 2;        //要素を変更していく
  v2[1] = 3;
  v2[2] = 5;
  v2[3] = 7;

  vector<int> v3{ 2, 3, 5, 7 };//要素を明示してvectorを初期化する

  cout << (v1 == v2 ? "等しい" : "等しくない") << endl;//出力値：等しい
  cout << (v1 == v3 ? "等しい" : "等しくない") << endl;//出力値：等しい
}