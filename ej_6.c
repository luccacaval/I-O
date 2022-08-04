#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a;
    int b;
    int n;
    printf("Ingrese el minimo\n");
    scanf("%d", &a);
    printf("Ingrese el maximo\n");
    scanf("%d", &b);
    while(scanf("%d", &n) != EOF){
        if(n > a && n < b) {
            printf("%d\n", n);
        }
    }
return 0;
}