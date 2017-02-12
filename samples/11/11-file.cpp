#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream infile("test.txt");

  if (!infile) {//ファイルが見つからない場合の処理
    cout << "ファイルが見つからない\n";
  }
  else {//ファイルが見つかった場合の処理
    string line;
    while (getline(infile, line)) {
      cout << line << endl;
    }
  }
}