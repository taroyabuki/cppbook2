#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream infile("test.txt");
  string line;
  while (getline(infile, line)) {//ファイルの終わりまで繰り返す
    cout << line << endl;
  }
  infile.close();
}