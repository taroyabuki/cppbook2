#include <iostream>
using namespace std;

//クラステンプレートの定義
template <typename T>
struct Point {
  T x, y;
  Point(T newX, T newY) : x(newX), y(newY) {}
  T squareSum() { return x * x + y * y; }//2乗和を返す関数
};

int main() {
  Point<int> a(3, 4);
  cout << a.squareSum() << endl;//出力値：25

  Point<double> b(3.0, 4.0);
  cout << b.squareSum() << endl;//出力値：25
}