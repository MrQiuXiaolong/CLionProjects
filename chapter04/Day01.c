//
// Created by 邱小龙 on 2024/1/24.
//
#include <stdio.h>
#include <math.h>

//验证哥德巴赫猜想

int prime(int);
int main(){
    printf("输入一个大于2的偶数");
    int ou;
    scanf("%d",&ou);

    for (int i = 2; i < ou; ++i) {
        if(prime(i)&& prime(ou-i)){//ou-i的原因是8=2+6  如果不减掉的话就会成为8=2+8 被减数+1 减数就得-掉被减数加上的数 使式子成立
            printf("%d=%d+%d\n",ou,i,ou-i);

        }

    }


}
int prime(int num){
    for (int i = 2; i <= sqrt(num); ++i) {
        if(num%i==0){
            return 0;
        }

    }
    return 1;
}
