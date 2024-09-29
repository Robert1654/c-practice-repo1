#include<stdio.h>
int main(){
    int a,b,c;
    printf("please input the time:");
    scanf("%d %d",&a,&b);
    if(a < 0){
        printf("wrong!\n");
        return 0;
    }
    c = b / 100 * 60 + b % 100;
    int d = a / 100 * 60 + c + a % 100;
    if(d < 0){
        printf("wrong!\n");
        return 0;
    }
    c = d / 60 * 100 + d % 60;
    printf("now time is %d\n",c);
    return 0;
}