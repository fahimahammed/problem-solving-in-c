#include<stdio.h>

int main()
{
    int X, C=0, i;

    while(1){
        scanf("%d", &X);
        if(X == 0){
            break;
        }
        else if(X%2 == 0){
            for(i = X; i<=X+8; i += 2) C += i;
        }
        else{
            for(i = X+1; i<=X+9; i += 2) C += i;
        }
        printf("%d\n", C);
        C = 0;
    }
    return 0;
}
