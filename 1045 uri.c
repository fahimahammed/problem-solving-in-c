#include<stdio.h>
int main(){
    double A, B, C, t;
    scanf("%lf %lf %lf", &A, &B, &C);
    if(A<B){
        t = A;
        A = B;
        B = t;
    }
    if(B<C){
        t=B;
        B=C;
        C=t;
    }
    if(A<B){
        t=A;
        A=B;
        B=t;
    }

    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((A*A) == (B*B + C*C)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if((A*A) > ((B*B)+(C*C))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((A*A) < ((B*B)+(C*C))){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(A==B && B==C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A==B || B==C || A==C){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
