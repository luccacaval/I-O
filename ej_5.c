#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;
  int i = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\n') {
      i++;
    }
  }
  printf("%d\n", i);
  return 0;
}
