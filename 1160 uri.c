#include<stdio.h>

int main()
{
    int n, c, a, b, i;
    double ac, bc;

    scanf("%d", &n);
    for(i=1; i<=n; i++){
        c = 0;
        scanf("%d %d %lf %lf", &a, &b, &ac, &bc);
        while(a<=b){
            a *= (ac/100)+1.0;
            b *= (bc/100)+1.0;
            c++;
            if(c>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(c<=100){
            printf("%d anos.\n",c);
        }
    }
    return 0;
}
