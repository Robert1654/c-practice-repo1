#include<stdio.h>
#include<math.h>
int main(){
    int t1,t2,t3 = 0,t4 = 0,t5 = 0,t6 = 0,t7 = 0,t8 = 0;
    printf("Please enter the current time and the time passed:");
    scanf("%d %d",&t1,&t2);
    // 如果时间小于0则错误
    if(t1 <= 0){
        printf("Please input a non-negative time!\n");
        return 0;
    }
    else{
        // 取小时位和分钟位
        t3 = t1 / 100;
        t4 = t1 - 100 * t3;
        t5 = t2 / 100;
        t6 = t2 - 100 * t5;
    }
    // 计算出小时和分钟的结果
    t7 = t3 + t5;
    t8 = t4 + t6;
    if(t8 >= 60){
        if(t8 >= 120){
            // 分钟位大于120则加两小时
            t8 = t8 - 120;
            t7 = t7 + 2;
        }
        else{
            // 加1小时
            t8 = t8 - 60;
            t7 = t7 + 1;
        }
    }
    if (t8 < 0){
        if(t8 < -60){
            // 减2小时
            t8 = t8 + 120;
            t7 = t7 - 2;
        }
        else{
            // 减1小时
            t8 = t8 + 60;
            t7 = t7 - 1;
        }
    }
    printf("the time now is %d\n", t7 * 100 + t8);
    return 0;
}