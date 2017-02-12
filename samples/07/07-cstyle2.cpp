#include <iostream>
using namespace std;

void report(const char* cstr) {          //サイズは不要
  for (int i = 0; cstr[i] != '\0'; ++i) {//文字列の終わりがわかる
    cout << '[' << i << "]: " << cstr[i] << endl;
  }
}

int main() {
  char cstr[] = "hello";
  report(cstr);
}