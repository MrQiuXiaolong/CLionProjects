//
// Created by ��С�� on 2024/1/30.
//


#include <stdio.h>
#include <string.h>

#define NUMBER 10
struct Person{
    char name[20];//����
    int count;//Ʊ��

}person[3]={
    "zhang3",0,
    "li4",0,
    "wang5",0,

};

/*
��дһ��ͳ��ѡƱ��ϵͳ�������Ⱥ�����ĺ�ѡ��������ͳ�Ƹ��˵ĵ�Ʊ����
*/
int main() {
    char container[20];
    int count=0;
    for (int i = 0; i < NUMBER; ++i) {
        printf("���ֶ�����,Ϊ(zhang3,li4,wang5)ͶƱ\n");
        scanf("%s",&container);

        for (int j = 0; j < NUMBER; ++j) {
            if(strcmp(container,person[j].name)==0){
               person[j].count++;
                break;
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
        printf("%s�����%d\n",person[i].name,person[i].count);
    }
    return 0;
}