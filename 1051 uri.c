#include<stdio.h>
int main(){
    float n, a, b, c, r;
    scanf("%f",&n);
    if(n<=2000.00){
        printf("Isento\n");
    }
    else{
        if(n>=2000.01 && n<=3000.00){
           a = n - 2000.00;
           r = a * 0.08;
        }
        else if(n>=3000.01 && n<=4500.00){
            a = n - 2000;
            b = a - 1000;
            a -= b;
            a = a * 0.08;
            b = b * 0.18;
            r = a + b;
        }
        else{
            a = n - 2000;
            b = a - 1000;
            c = b - 1500;
            a -= b;
            b -= c;
            a = a * 0.08;
            b = b * 0.18;
            c = c * 0.28;
            r = a + b + c;
        }
        printf("R$ %0.2f\n",r);
    }
    return 0;
}
