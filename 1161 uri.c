#include<stdio.h>

int fact(n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);

    printf("%d",fact(M)+fact(N));
}
