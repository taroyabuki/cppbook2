#include <iostream>
using namespace std;

struct A {
  int x;               //データメンバ
  void showX() {       //メンバ関数
    cout << "x = " << x << endl;
  }
  static int s;        //静的データメンバ
  static void showS() {//静的メンバ関数
    cout << "s = " << s << endl;
  }
};

//静的データメンバは、クラス定義の外で初期化する
int A::s = 5;//これを省略すると0になる

int main() {
  //静的メンバ関数はオブジェクトがなくても利用できる
  A::showS();//出力値：s = 5

  A a1, a2;
  a1.x = 1;
  a2.x = 2;
  a1.s = 10; //a1.sの変更が
  a2.showS();//a2.sにも反映される。出力値：s = 10
  a2.showX();//a1.xとa2.xは無関係。出力値：x = 2
}