#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  for (int i = 0; i < argc; ++i) {
    cout << "argv[" << i << "]: " << argv[i] << endl;
  }
  //コマンドライン引数が2個以上なら正常終了することにする
  if (2 <= argc) return 0;
  else return 1;
}