#include<stdio.h>
int main(){
    int a, b, i, max, min, c=0;
    scanf("%d %d",&a, &b);
    if(a>b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    for(i=min+1; i<max; ++i){
        if(i%2 == 1 || i%2 == -1){
            c = c+i;
        }
    }
    printf("%d\n",c);
}
