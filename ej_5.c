#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;
  int caracteres = 0;
  int lineas = 0;
  int palabras = 0;
  int in_word;
  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != ' ') {
      caracteres++;
    }
    if(c != '\n' && c!= 't' && c != ' ') {
      in_word = 1;
    } else {
      if(in_word != 0) {
        palabras++;
      }
      in_word = 0;
    }   
    if (c == '\n')  {
      lineas++;
    }
  }
  printf("caracteres = %d\n lineas = %d\n palabras = %d\n", caracteres, lineas, palabras);
  return 0;
}
