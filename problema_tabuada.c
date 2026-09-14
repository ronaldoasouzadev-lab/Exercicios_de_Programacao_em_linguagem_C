#include <stdio.h>
#include <string.h>

int main() {


    int N, i, mult;

    printf("Deseja a tabuada de qual valor? ");
    scanf("%d", &N);
    
    if (N != 0){
        for (i = 1; i <= 10; i++) {
        mult = N * i;
        printf ("%d x %d = %d\n", N, i, mult);
    }
    }
    else {
        printf("Impossivel calcular.\n");
    }

    return 0;
}