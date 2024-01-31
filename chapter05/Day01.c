//
// Created by 邱小龙 on 2024/1/30.
//


#include <stdio.h>
#include <string.h>

//声明结构体
struct Student{
    int id;
    char name[20];
    char gender;
    char address[50];
};
typedef struct Cat{ //typedef 指定别名

    char name[10];
    int age;
    char color[10];
}coke;//coke-->就是别名

struct{
    char name[20];
    int age;
    char gender;
    char phone[11];
} emp1 = {"Lucy", 23, 'F', "13012341234"},
  emp2 = {"Tony", 25, 'M', "13367896789"};
int main() {

    struct Student stu2;
    //stu2.name="ABC"; 不能使用赋值元素符给字符数组赋值
    strcpy(stu2.name,"ABC");
    printf("性别=%c\n",stu2.name);

    struct Student stu1={.id=1000,.name="路飞",.gender='M',.address="东海风车镇"};
    printf("id=%d,姓名=%s,性别=%c,地址=%s\n",stu1.id,stu1.name,stu1.gender,stu1.address);
    struct Student stu3={1001,"索隆",'M',"东海刀匠镇"};
    printf("id=%d,姓名=%s,性别=%c,地址=%s\n",stu3.id,stu3.name,stu3.gender,stu3.address);

    return 0;
}