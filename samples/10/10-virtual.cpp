#include <iostream>
#include <vector>
using namespace std;

struct Shape {
  virtual void draw() = 0;//純粋仮想関数
  virtual ~Shape();//派生の可能性があるならvirtualにしておく（必須ではない）
};

Shape::~Shape() {}

struct Circle : public Shape {
  void draw();
};

void Circle::draw() { cout << "○" << endl; }

struct Rectangle : public Shape {
  void draw();
};

void Rectangle::draw() { cout << "□" << endl; }

int main() {
  //Shape s;//エラー（抽象クラスのオブジェクトを作ることはできない）
  Circle c;
  c.draw();//出力値：○
  Rectangle r;
  r.draw();//出力値：□

  vector<Shape*> shapes = { &c, &r };
  for (auto s : shapes) {
    s->draw();
  }
  //出力値：○
  //出力値：□
}