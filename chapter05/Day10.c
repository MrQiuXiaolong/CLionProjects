//
// Created by ��С�� on 2024/1/31.
//

#define NUMBER 2
#include <stdio.h>
struct Person{
    char name[20];
    int id;
    char gender; //�Ա� m->�� f->Ů

    char profession;//ְҵ s->ѧ�� t->��ʦ

    union {
        float score;
        char course[20];
    }sc; //sc ��һ�����������

};
int main() {
    struct Person person[NUMBER];

    for (int i = 0; i < 2; ++i) {
        printf("������(name->id->gender->profession)\n");
        scanf("%s %d %c %c",person[i].name,&person[i].id,&person[i].gender,&person[i].profession);

        if('s'==person[i].profession){//�ж���ѧ��������ʦ
            printf("������(score)\n");
            scanf(" %lf",&person[i].sc.score);

        }else{
            printf("������(course)\n");
            scanf("%s",person[i].sc.course);
        }

    }

    //��ӡ��Ա��Ϣ
    for (int i = 0; i < NUMBER; ++i) {
        if(person[i].profession=='s'){
            printf("%s\t%d\t%c\t%c\t\t%f\n",person[i].name,person[i].id, person[i].gender,person[i].profession,person[i].sc.score);
            break;
        }
        printf("%s\t%d\t%c\t%c\t\t%s\n",person[i].name,person[i].id, person[i].gender,person[i].profession,person[i].sc.course);

    }
    return 0;
}