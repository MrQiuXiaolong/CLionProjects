//
// Created by 邱小龙 on 2023/12/17.
//
/* 1.什么是计算机程序
 *      能被计算机能识别和执行的指令，运行于电子计算机上。
 * 2.什么是计算机语言
 *      人和计算机交流的语言
 * 2.1结构化语言
 *      顺序结构 选择结果 循环结构
 * 3.c语言特点
 *      3.1语言简洁、使用方便灵活
 *      3.2运算符丰富
 *      3.3数据类型丰富
 *      3.4具有结构化控制语句
 *      3.5语法限制不太严格
 *      3.6c语言直接访问物理地址
 *      3.7移植性好
 *      3.8执行效率高
 * 4.c语言程序结构
 *      4.1一个程序由一个或多个源程序文件组成
 *      4.2程序总是从main函数开始执行
 *      4.3C语言本身不提供输入输出语句，是由库函数提供的
 *      4.4注释为了程序的可读性
 * 5.程序设计任务
 *      5.1问题分析
 *      5.2设计算法
 *      5.3编写程序
 *      5.4对源程序进行编辑、编译、连接
 *      5.5运行程序分析结果
 * */
#include <stdio.h>  //预处理指令
int main() {        //定义主函数
    printf("Hello, World!\n");      //输出语句 \n(换行符)换行语句
    //调用方法
    // sum();
    //max(46,45);
    quadrilateral();
    return 0;       //返回值--->值函数结束的时候返回0
}
int sum(){
    int a,b;
    a=123;
    b=456;
    printf("a+b=%d",a+b);   //%d表示输出的数据为十进制的数
    return 0;
}
int max(int a,int b){
    int z;

    if(a>b){
        printf("a=%d > b=%d",a,b);
    }else{
        printf("a=%d < b=%d",a,b);
    }



    return z;
}
int quadrilateral(){
    for (int i = 0; i < 4; ++i) {
        if(i!=0){
            for (int j = 1; j < i+1; ++j) {
                printf(" ");
            }
        }

        for (int j = 0; j < 5; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}