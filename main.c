#include<stdio.h>
#include<stdlib.h>

int main() {
    int *v, tamanho, i;
    scanf("%d", &tamanho);
    v = (int*)malloc(tamanho*sizeof(int));
    if(v == NULL) {
        printf("[VAZIO]");
    } else {
        for(i = 0; i < tamanho; i++) {
            scanf("%d", &v[i]);
        }
        for(i = 0; i < tamanho; i++)
            printf("%d\t", v[i]);
    }
    free(v);
}