#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream datafile("test.dat");
  string label;
  int x, y, z;
  while (datafile >> label >> x >> y >> z) {   //データを読み込む
    cout << label << ": " << x + y + z << endl;//ラベルと合計を表示
  }
  datafile.close();
}