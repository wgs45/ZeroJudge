// TODO: Formulas: M=month, D=day, S=(M*2+D)%3
#include <iostream>
using namespace std;

int main() {
  int month, day;

  cin >> month >> day;
  if (month < 1 || month > 12 || day < 1 || day > 31) {
    cout << "Invalid input!" << endl;
    return 1;
  }

  int fortune = (month * 2 + day) % 3;

  switch (fortune) {
  case 2:
    cout << "大吉" << endl;
    break;
  case 1:
    cout << "吉" << endl;
    break;
  default:
    cout << "普通" << endl;
  }

  return 0;
}
