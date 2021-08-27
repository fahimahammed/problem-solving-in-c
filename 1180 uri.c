#include<stdio.h>
int main()
{
    int N, i, small, position = 0;
    scanf("%d", &N);
    int X[N];
    for(i=0; i<N; i++){
        scanf("%d", &X[i]);
    }

    small = X[0];
    for(i=0; i<N; i++){
        if(small > X[i]){
            small = X[i];
            position = i;
        }
    }
    printf("Menor valor: %d\n", small);
    printf("Posicao: %d\n",position);
    return 0;
}
