#include<stdio.h>
int main(){
    int n, i, c=1;
    scanf("%d", &n);
    if(n%2 == 0 || n == 0){
        i=n+1;
        while(c<=6){
            printf("%d\n",i);
            i= i+2;
            c++;
        }
    }
    else{
        i=n;
        while(c<=6){
            printf("%d\n",i);
            i= i+2;
            c++;
        }
    }

}
