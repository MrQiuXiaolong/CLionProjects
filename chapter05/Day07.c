//
// Created by ��С�� on 2024/1/31.
//


#include <stdio.h>
#include <string.h>

#define TRUE 1
/*
һ�����������ο͵�������ȡ��ͬ�۸����Ʊ��
��1�����д�οͽṹ�壨Visitor�����������������䣬Ӧ��Ʊ��
��2����д����ticket()����������ξ����ܹ��������Ʊ�۸������
    ��������>=18����ƱΪ20Ԫ�����������ѡ�
��3������ѭ���ӿ���̨�������ֺ����䣬��ӡ��Ʊ�շ�����������������n�����˳�����
 */

struct Visitor{
    char *  name;
    int age;
    double money;
};

void ticket(struct Visitor *visitor){

    if(visitor->age >= 18 && visitor->age < 60){

        visitor->money=20.0;
        printf("��ƱΪ%lfԪ\n",visitor->money);

    }else{
        printf("��Ʊ���\n");
    }

}
int main() {
    struct Visitor visitor;
    while(TRUE){
        //�����ο���,nΪ�˳�
        printf("�������ο���,�Ǽ���Ϣ(����n�Ƴ�����)\n");
        scanf("%s",visitor.name);

        if(strcmp("n",visitor.name)==0){
            break;
        }
        printf("����������\n");
        scanf("%d",&visitor.age);

        ticket(&visitor);
    }
    printf("�˳�����\n");
    return 0;
}