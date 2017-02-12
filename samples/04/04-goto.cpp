#include <iostream>
using namespace std;

int main() {
  int i = 0;
start:
  if (i++ == 5) goto end;
  cout << "Hello, World!\n";
  goto start;
end:
  ;//ラベルは文だから，何もなくても「;」が必要。
}