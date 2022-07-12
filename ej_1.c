#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  printf("Ingrese la cantidad de numeros\n");
  scanf("%d", &n);
  int suma = 0;
  int num;
  for (int i = 1; i <= n; i++) {
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    suma += num;
  }
  printf("%d\n", suma);
  return 0;
}
