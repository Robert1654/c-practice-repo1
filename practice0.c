#include<stdio.h>
int main(){
    int i;
    printf("input\n");
    scanf("%d",&i);
    i = i / 60 * 60;
    printf("%d\n",i);
    return 0;
}