#include <iostream>
using namespace std;

int main() {
  int i = 0;
start:
  cout << ++i << endl;
  if (i < 10) goto start;
}