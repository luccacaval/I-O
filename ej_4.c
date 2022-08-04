#include <stdio.h>

int main(int argc, char const *argv[]) {
    int m;
    int suma = 0;
    while(scanf("%d", &m) != EOF)
     {
        suma += m;
    }
    printf("%d\n",suma);
    return 0;
}