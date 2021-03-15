#include<stdio.h>
int main(){
    int a[10];
    int i, oddCount=0, evenCount=0, posCount=0, negCount=0;
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++){
        if((a[i]%2)==0){

            evenCount++;
        }
        else{
            oddCount++;
        }

        if(a[i]<0){
            negCount++;
        }
        else if(a[i]>0){
            posCount++;
        }
    }
    printf("%d valor(es) par(es)\n",evenCount);
    printf("%d valor(es) impar(es)\n",oddCount);
    printf("%d valor(es) positivo(s)\n",posCount);
    printf("%d valor(es) negativo(s)\n",negCount);
    return 0;
}
