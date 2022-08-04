#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[]) {
    srand(time(NULL));
    int a;
    int b;
    int n;
    printf("Ingrese el minimo\n");
    scanf("%d", &a);
    printf("Ingrese el maximo\n");
    scanf("%d", &b);
    printf("Ingrese la cantidad de numeros");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int num = (rand() % b) + 1;
        if(num < a){
            num = a;
        }
        printf("%d\n", num);
    }
return 0;
}