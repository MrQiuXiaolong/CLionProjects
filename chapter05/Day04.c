//
// Created by ��С�� on 2024/1/30.
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
����һ���༶��ѧ����Ϣ(����id��name��gender��score)��
����ѧϰ�ɼ�����ȫ��ƽ���ɼ���ѧ���ҳ���������ⲿ��ѧ����
�����ͳɼ�
 */
int main() {
    int sum=0;//�����ܳɼ�

    struct Student student[LEN]={
            {1000,"·��",'M',32},
            {1001,"��¡",'M',98},
            {1002,"ɽ��",'M',88},
            {1003,"������",'M',55},
            {1004,"����",'W',100},
    };

    //�����ܳɼ�
    for (int i = 0; i < LEN; ++i) {
            printf("id=%d,name=%s,gender=%c,score=%d\n",student[i].id,student[i].name,student[i].gender,student[i].score);
            sum+=student[i].score;

    }

    printf("��ñ���ܳɼ�Ϊ=%d\n",sum);

    //����ƽ���ɼ�
    int average = sum/LEN;
    printf("��ñ��ƽ���ɼ�Ϊ=%d\n",average);
    int count=0;
    for (int i = 0; i < LEN; ++i) {
        if(student[i].score > average){
            count++;
            printf("����ƽ���ɼ���%dλ=%s\n",count,student[i].name);
        }
    }


    return 0;
}