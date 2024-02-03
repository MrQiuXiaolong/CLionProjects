//
// Created by 邱小龙 on 2024/2/3.
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
    char *p;//对其值没有初始化,不能给值赋值
    *p="A";
    printf("%s",p);
}
void test02(){
    //strlen() 返回类型size_t
    String c="China";
    printf("c的字符长度=%d\n", strlen(c));
    printf("c的字符长度=%d\n", strlen("China"));

    //sizeof和strlen是有区别的,sizeof是在内存中占的字节,strlen是数据在内存中占的字节
    //参数是字符串变量,返回的是 size_t 类型的无符号整数,一般当做int类型处理
    printf("c的长度=%d\n",sizeof(c));

    //strcpy() 复制字符串
    char c1[100];
    strcpy(c1,"Mr.Qiu hello!");
    printf("%s\n",c1);

    //strncpy() 选取一部分字符串复制
    strncpy(c1,"word \n man",4);
    printf("%s\n",c1);

    //strcat() 连接字符
    char c2[100]="hello\t";
    String c3="word";
    printf("%s\n", strcat(c2,c3));//字符1必须大 得容纳添加进来的字符串

    //strcmp 比较两个字符 返回正数 表示字符串1大 负数则相反 字符串2大 0表示相等
    char *str1 = "abxy";
    char *str2 = "abmn";
    printf("%d\n",strcmp(str1, str2));
    int compare1 = strcmp("China", "Korea");
    printf("%d\n",compare1);

    //strlwr大转小 strupr小转大
    char str[] = "HelloWorld";
    strlwr(str);
    puts(str);
    strupr(str);
    puts(str);

    //sprintf() 基本类型转换字符串
    int A=65;
    char c4[10];
    sprintf(c4,"%d",A);
    printf("%s\n",c4);

    //atoi() 字符串转换基本类型
    int at = atoi(c4);
    printf("%d\n",at);
}