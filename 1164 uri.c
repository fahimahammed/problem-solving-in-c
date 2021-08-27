#include<stdio.h>

int main()
{
    int n, s=0, c, i;
    scanf("%d", &c);
    for(i=1; i<=c; i++){
        scanf("%d", &n);
        for(int i = 1; i<n; i++){
            if (n%i==0){
                s += i;
            }
        }
        if(s == n){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n", n);
        }
        s=0;
    }
    return 0;
}
