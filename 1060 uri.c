#include<stdio.h>
int main(){
    int i, count = 0;
    float a[10];
    for(i=1; i<=6; i++){
        scanf("%f",&a[i]);
    }
    for(i=1; i<=6; i++){
        if(a[i]>0){
            count ++;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}
