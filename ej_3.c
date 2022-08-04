#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    int m;
    int suma = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        suma += m;
    }
    printf("%d",suma);
    return 0;
}