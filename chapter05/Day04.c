//
// Created by 邱小龙 on 2024/1/30.
//

#define LEN 5
#include <stdio.h>
struct Student {
    int id;
    char name[20];
    char gender;
    int score;
};
/*
输入一个班级的学生信息(包含id、name、gender、score)，
并把学习成绩超过全班平均成绩的学生找出来，输出这部分学生的
姓名和成绩
 */
int main() {
    int sum=0;//计算总成绩

    struct Student student[LEN]={
            {1000,"路飞",'M',32},
            {1001,"索隆",'M',98},
            {1002,"山治",'M',88},
            {1003,"乌索普",'M',55},
            {1004,"娜美",'W',100},
    };

    //计算总成绩
    for (int i = 0; i < LEN; ++i) {
            printf("id=%d,name=%s,gender=%c,score=%d\n",student[i].id,student[i].name,student[i].gender,student[i].score);
            sum+=student[i].score;

    }

    printf("草帽团总成绩为=%d\n",sum);

    //计算平均成绩
    int average = sum/LEN;
    printf("草帽团平均成绩为=%d\n",average);
    int count=0;
    for (int i = 0; i < LEN; ++i) {
        if(student[i].score > average){
            count++;
            printf("高于平均成绩第%d位=%s\n",count,student[i].name);
        }
    }


    return 0;
}