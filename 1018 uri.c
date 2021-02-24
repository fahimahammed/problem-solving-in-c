//1018 uri: https://www.urionlinejudge.com.br/judge/en/problems/view/1018
#include<stdio.h>
#include<math.h>
int main(){
    int notes[]={100, 50, 20, 10, 5, 2, 1}, n, i, q[7];
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0; i<7; i++){
        q[i]=n/notes[i];
        n = n%notes[i];
    }

    printf("%d nota(s) de R$ 100,00\n",q[0]);
    printf("%d nota(s) de R$ 50,00\n",q[1]);
    printf("%d nota(s) de R$ 20,00\n",q[2]);
    printf("%d nota(s) de R$ 10,00\n",q[3]);
    printf("%d nota(s) de R$ 5,00\n",q[4]);
    printf("%d nota(s) de R$ 2,00\n",q[5]);
    printf("%d nota(s) de R$ 1,00\n",q[6]);

    return 0;
}
