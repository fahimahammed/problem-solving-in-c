#include<stdio.h>
int main()
{
    int N[100], i;
    double X;
    scanf("%lf", &X);

    for(i=0; i<10; i++){
        printf("N[%d] = %.4lf\n", i, X);
        X /= 2;
    }
    return 0;
}
