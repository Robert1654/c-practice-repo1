#include<stdio.h>
int main(){
    int a,b,c;
    printf("please input the wrong number:");
    scanf("%d",&a);
    b = a /16 * 10;
    c = a % 16 ;
    printf("the correct number is %d\n",b + c);
    return 0;
}