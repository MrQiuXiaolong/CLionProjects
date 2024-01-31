//
// Created by 邱小龙 on 2024/1/31.
//


#include <stdio.h>
#include <string.h>

#define TRUE 1
/*
一个景区根据游客的年龄收取不同价格的门票。
（1）请编写游客结构体（Visitor），包含姓名，年龄，应付票价
（2）编写函数ticket()，根据年龄段决定能够购买的门票价格并输出。
    规则：年龄>=18，门票为20元，其它情况免费。
（3）可以循环从控制台输入名字和年龄，打印门票收费情况，如果名字输入n，则退出程序。
 */

struct Visitor{
    char *  name;
    int age;
    double money;
};

void ticket(struct Visitor *visitor){

    if(visitor->age >= 18 && visitor->age < 60){

        visitor->money=20.0;
        printf("门票为%lf元\n",visitor->money);

    }else{
        printf("门票免费\n");
    }

}
int main() {
    struct Visitor visitor;
    while(TRUE){
        //输入游客名,n为退出
        printf("请输入游客名,登记信息(输入n推出程序)\n");
        scanf("%s",visitor.name);

        if(strcmp("n",visitor.name)==0){
            break;
        }
        printf("请输入年龄\n");
        scanf("%d",&visitor.age);

        ticket(&visitor);
    }
    printf("退出程序\n");
    return 0;
}