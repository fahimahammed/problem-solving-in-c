#include<stdio.h>
int main()
{
    long long int m, first = 0, second = 1, next, c;
    int i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++, first = 0, second = 1){
        scanf("%lld", &m);
        m = m+1;
        for(c = 0; c<m; c++){
            if(c <= 1) {
                next = c;
            }
            else{
                next = first + second;
                first = second;
                second = next;
            }
        }
        printf("Fib(%lld) = %lld\n",m-1, next);
    }
    return 0;
}
