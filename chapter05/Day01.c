//
// Created by ��С�� on 2024/1/30.
//


#include <stdio.h>
#include <string.h>

//�����ṹ��
struct Student{
    int id;
    char name[20];
    char gender;
    char address[50];
};
typedef struct Cat{ //typedef ָ������

    char name[10];
    int age;
    char color[10];
}coke;//coke-->���Ǳ���

struct{
    char name[20];
    int age;
    char gender;
    char phone[11];
} emp1 = {"Lucy", 23, 'F', "13012341234"},
  emp2 = {"Tony", 25, 'M', "13367896789"};
int main() {

    struct Student stu2;
    //stu2.name="ABC"; ����ʹ�ø�ֵԪ�ط����ַ����鸳ֵ
    strcpy(stu2.name,"ABC");
    printf("�Ա�=%c\n",stu2.name);

    struct Student stu1={.id=1000,.name="·��",.gender='M',.address="�����糵��"};
    printf("id=%d,����=%s,�Ա�=%c,��ַ=%s\n",stu1.id,stu1.name,stu1.gender,stu1.address);
    struct Student stu3={1001,"��¡",'M',"����������"};
    printf("id=%d,����=%s,�Ա�=%c,��ַ=%s\n",stu3.id,stu3.name,stu3.gender,stu3.address);

    return 0;
}