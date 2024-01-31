//
// Created by 邱小龙 on 2024/1/30.
//


#include <stdio.h>
#include <string.h>

#define NUMBER 10
struct Person{
    char name[20];//姓名
    int count;//票数

}person[3]={
    "zhang3",0,
    "li4",0,
    "wang5",0,

};

/*
编写一个统计选票的系统，根据先后输入的候选人姓名，统计各人的得票数。
*/
int main() {
    char container[20];
    int count=0;
    for (int i = 0; i < NUMBER; ++i) {
        printf("请手动输入,为(zhang3,li4,wang5)投票\n");
        scanf("%s",&container);

        for (int j = 0; j < NUMBER; ++j) {
            if(strcmp(container,person[j].name)==0){
               person[j].count++;
                break;
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
        printf("%s获得了%d\n",person[i].name,person[i].count);
    }
    return 0;
}