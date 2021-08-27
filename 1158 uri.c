#include <stdio.h>
int main()
{
    int N, X, Y, i, j, C;
    scanf("%d", &N);
    for(i = 1; i<=N; i++){
        scanf("%d %d", &X, &Y);
        if(X%2 == 1){
            C = 0;
            for(j = 1; j<=Y; j++){
                C += X;
                X += 2;
            }
            printf("%d\n", C);
        }
        else{
            X++;
            C = 0;
            for(j=1; j<=Y; j++){
                C += X;
                X += 2;
            }
            printf("%d\n", C);
        }
    }
    return 0;
}
