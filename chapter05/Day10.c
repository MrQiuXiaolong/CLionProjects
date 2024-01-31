//
// Created by 邱小龙 on 2024/1/31.
//

#define NUMBER 2
#include <stdio.h>
struct Person{
    char name[20];
    int id;
    char gender; //性别 m->男 f->女

    char profession;//职业 s->学生 t->老师

    union {
        float score;
        char course[20];
    }sc; //sc 是一个共用体变量

};
int main() {
    struct Person person[NUMBER];

    for (int i = 0; i < 2; ++i) {
        printf("请输入(name->id->gender->profession)\n");
        scanf("%s %d %c %c",person[i].name,&person[i].id,&person[i].gender,&person[i].profession);

        if('s'==person[i].profession){//判断是学生还是老师
            printf("请输入(score)\n");
            scanf(" %lf",&person[i].sc.score);

        }else{
            printf("请输入(course)\n");
            scanf("%s",person[i].sc.course);
        }

    }

    //打印成员信息
    for (int i = 0; i < NUMBER; ++i) {
        if(person[i].profession=='s'){
            printf("%s\t%d\t%c\t%c\t\t%f\n",person[i].name,person[i].id, person[i].gender,person[i].profession,person[i].sc.score);
            break;
        }
        printf("%s\t%d\t%c\t%c\t\t%s\n",person[i].name,person[i].id, person[i].gender,person[i].profession,person[i].sc.course);

    }
    return 0;
}