#include<stdio.h>
int main(){
    int A[3],i,j, a,b,c,t;
    scanf("%d %d %d",&a, &b, &c);
    A[0]=a;
    A[1]=b;
    A[2]=c;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(A[i]<A[j]){
                t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
    printf("%d\n%d\n%d\n",A[0],A[1],A[2]);
    printf("\n%d\n%d\n%d\n",a,b,c);
    return 0;
}
