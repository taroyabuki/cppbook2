#include <iostream>
#include <string>
using namespace std;

class Greeting {
  string phrase;
public:
  Greeting(string newPhrase) : phrase(newPhrase) {}

  void operator()(const string& name) {
    cout << phrase << "、" << name << endl;
  }
};

int main() {
  Greeting hello("コンニチハ");
  Greeting goodbye("サヨウナラ");

  hello("タロウ"); //出力値：コンニチハ、タロウ
  goodbye("ハナコ"); //出力値：サヨウナラ、ハナコ
}