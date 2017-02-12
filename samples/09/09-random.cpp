#include <iostream>
#include <random>
#include <map>
using namespace std;

int main() {
  random_device engine;

  uniform_int_distribution<unsigned> dist1(1, 6);
  for (int i = 0; i < 10; ++i) {
    cout << dist1(engine) << ", ";
  }
  cout << endl;
  //出力例：1, 1, 3, 6, 1, 1, 2, 3, 5, 4,

  uniform_real_distribution<double> dist2(0.0, 1.0);
  for (int i = 0; i < 5; ++i) {
    cout << dist2(engine) << ", ";
  }
  cout << endl;
  //出力例：0.0460653, 0.91681, 0.0933962, 0.842586, 0.320971,

  map<int, int> frequency;//頻度を数えるためのコンテナ
  normal_distribution<double> dist3(50.0, 3.0);
  for (int i = 0; i < 500; ++i) {
    double x = dist3(engine);
    ++frequency[static_cast<int>(x)];//頻度を数える
  }
  for (auto p : frequency) {
    cout << p.first << " | ";
    for (int i = 0; i < p.second; ++i) cout << "*";
    cout << endl;
  }
}