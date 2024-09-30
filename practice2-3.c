#include<stdio.h>
// 函数作用为读入正三位数并输出按位逆序的数字
int main(){
    int a,b,c,d;
    printf("please input a positive three-digit number:");
    scanf("%d",&a);
    if(a >= 100 && a <= 999){
        // 取百、十、个三位
        b = a / 100;
        c =( a - 100 * b )/ 10;
        d = a % 10;
        // 逆序
        printf("output is %d\n",100 * d + 10 * c + b);
    }
    else{
        // 不满足条件
        printf("please input the right number!");
    }
    return 0;
}