#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream infile("numbers.dat");
  int total = 0;
  string line;
  while (getline(infile, line)) {
    total += stoi(line);
  }
  cout << total << endl;
}