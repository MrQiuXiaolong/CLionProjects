//
// Created by ��С�� on 2024/2/3.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* String;

void test01();
void test02();

int main() {
    //test01();
    test02();
    return 0;
}
void test01(){
    char *p;//����ֵû�г�ʼ��,���ܸ�ֵ��ֵ
    *p="A";
    printf("%s",p);
}
void test02(){
    //strlen() ��������size_t
    String c="China";
    printf("c���ַ�����=%d\n", strlen(c));
    printf("c���ַ�����=%d\n", strlen("China"));

    //sizeof��strlen���������,sizeof�����ڴ���ռ���ֽ�,strlen���������ڴ���ռ���ֽ�
    //�������ַ�������,���ص��� size_t ���͵��޷�������,һ�㵱��int���ʹ���
    printf("c�ĳ���=%d\n",sizeof(c));

    //strcpy() �����ַ���
    char c1[100];
    strcpy(c1,"Mr.Qiu hello!");
    printf("%s\n",c1);

    //strncpy() ѡȡһ�����ַ�������
    strncpy(c1,"word \n man",4);
    printf("%s\n",c1);

    //strcat() �����ַ�
    char c2[100]="hello\t";
    String c3="word";
    printf("%s\n", strcat(c2,c3));//�ַ�1����� ��������ӽ������ַ���

    //strcmp �Ƚ������ַ� �������� ��ʾ�ַ���1�� �������෴ �ַ���2�� 0��ʾ���
    char *str1 = "abxy";
    char *str2 = "abmn";
    printf("%d\n",strcmp(str1, str2));
    int compare1 = strcmp("China", "Korea");
    printf("%d\n",compare1);

    //strlwr��תС struprСת��
    char str[] = "HelloWorld";
    strlwr(str);
    puts(str);
    strupr(str);
    puts(str);

    //sprintf() ��������ת���ַ���
    int A=65;
    char c4[10];
    sprintf(c4,"%d",A);
    printf("%s\n",c4);

    //atoi() �ַ���ת����������
    int at = atoi(c4);
    printf("%d\n",at);
}