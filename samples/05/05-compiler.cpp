#include <iostream>
using namespace std;

int main() {

#ifdef _MSC_VER
  cout << "Visual C++" << endl;
#endif

#if (defined(__GNUG__)) && !(defined(__clang__) || defined(__ICC))
  cout << "GNU C++" << endl;
#endif

#ifdef __clang__
  cout << "Clang C++" << endl;
#endif

}