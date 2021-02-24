// 1020 uri: https://www.urionlinejudge.com.br/judge/en/problems/view/1020
#include<stdio.h>
int main(){
    int day, month, year;
    scanf("%d",&day);
    printf("%d ano(s)\n",day/365);
    day = day%365;
    printf("%d mes(es)\n",day/30);
    day = day%30;
    printf("%d dia(s)\n",day);
    return 0;
}
