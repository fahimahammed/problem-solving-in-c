#include<stdio.h>
int main(){
    float A, B, C, area, perimeter;
    scanf("%f %f %f", &A, &B, &C);
    if((float)(A+B)>C && (float)(B+C)>A && (float)(C+A)>B){
        perimeter = A+B+C;
        printf("Perimetro = %.1f\n",perimeter);
    }
    else{
        area = ((A+B)*C)/2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
