// TODO: Formulas: M=month, D=day, S=(M*2+D)%3
#include <stdio.h>

int main() {
  int month, day;

  scanf("%d%d", &month, &day);

  // Input validation
  if (month < 1 || month > 12 || day < 1 || day > 31) {
    printf("Invalid input!\n");
    return 1;
  }

  int fortune = (month * 2 + day) % 3;

  switch (fortune) {
  case 2:
    printf("大吉\n");
    break;
  case 1:
    printf("吉\n");
    break;
  default:
    printf("普通\n");
  }

  return 0;
}
