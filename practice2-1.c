#include<stdio.h>
int main(){
    int a,foot,inch;
    printf("input the centimeter:");
    scanf("%d",&a);
    if(a >= 0){
        foot = a / 100 / 0.3048;
        inch = (a /30.48 - foot) * 12;
        printf("%d %d\n",foot,inch);
    }
    else{
        printf("please enter a non-negative number");
    }
    return 0;
}