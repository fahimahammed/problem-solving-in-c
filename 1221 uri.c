#include<stdio.h>
int main()
{
    int N, X;
    scanf("%d", &N);
    for(int i = 1; i<= N; i++){
        scanf("%d", &X);
        if(X%2 == 0){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }

    return 0;
}
