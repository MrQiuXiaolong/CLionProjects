//
// Created by 邱小龙 on 2023/12/18.
//
/*
 * 程序=算法+数据结构
 * 数据的类型和数据的组织形式,就是数据结构

 * 什么是算法?
 * 解决某个问题的步骤
 *
 * 什么叫结构化算法，为什么要提倡结构化算法?
 * 把一个大的功能的实现分割为许多个小功能的实现
 * 便于编写,阅读,修改和维护.减少程序出错的机会,提高程序可读性
 */
#include <stdio.h>
int main(){

//jie();
duo();
}
int jie(){
    int sum=1,sum2=1;
    for (int i = 1; i <= 5; ++i) {
        sum*=i;
    }

    for (int i = 1; i <= 5; i+=2) {
        sum2*=i;
    }
    printf("sum总和为：%d\n",sum);
    printf("sum2总和为：%d\n",sum2);

}

int duo(){
    int sign=1;
    double sum=1.0,term;
    for (double i = 2.0; i <= 100; ++i) {
        sign=-sign;
        term=sign/i;
        sum=sum+term;
        printf("term=%.10lf\n",term);
    }
    printf("sum=%lf\n",sum);
}
