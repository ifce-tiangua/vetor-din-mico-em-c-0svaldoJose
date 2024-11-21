#include<stdio.h>
#include<stdlib.h>

int main() {
    int *v, tamanho, i;
    scanf("%d", &tamanho);
    v = (int*)malloc(tamanho * sizeof(int));
    if(v == NULL|| tamanho == 0) {
        printf("[vazio]");
    } else {
        for(i = 0; i < tamanho; i++) {
            scanf("%d", &v[i]);
        }
        printf("[");
        for(i = 0; i < tamanho; i++) {
            printf("%d", v[i]);
            if(i < tamanho - 1) {
                printf(", ");
            }
        }
        printf("]");
        free(v);
    }
    return 0;
}