#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int suma = 0;
  int num;
  while (true) {
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    suma += num;
    if (num == 0) {
      printf("%d\n", suma);
      return 0;
    }
  }

}
