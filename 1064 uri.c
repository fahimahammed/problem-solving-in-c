#include<stdio.h>
int main(){
    float a, sum=0.00, avg;
    int i, c=0;
    for(i=0; i<6; i++){
        scanf("%f",&a);
        if(a>0){
            c++;
            sum = sum + a;
        }
    }
    avg = sum/c;
    printf("%d valores positivos\n", c);
    printf("%.1f\n",avg);

}
