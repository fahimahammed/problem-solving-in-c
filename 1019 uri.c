//1019 uri: https://www.urionlinejudge.com.br/judge/en/problems/view/1019
#include<stdio.h>
#include<math.h>
int main(){
    int t=0, m=0, h=0;
    scanf("%d",&t);
    if(t>=3600){
    h = t/3600;
    t = t%3600;
    }

    if(t>=60){
        m = t/60;
        t=t%60;
    }

    printf("%d:%d:%d\n",h,m,t);
    return 0;
}
