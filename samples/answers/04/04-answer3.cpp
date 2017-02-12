#include <iostream>
using namespace std;

int main() {
  cout << " | 0 1 2 3 4 5 6 7 8 9 A B C D E F\n";//1行目
  cout << "-|--------------------------------";  //2行目

  //3行目以降
  char ch = 0x1f;
  while (ch < 0x7f) {
    if (ch % 16 == 15) cout << endl << ch / 16 + 1 << '|';
    cout << ' ' << ++ch;
  }
  cout << endl;
}