//
// Created by 邱小龙 on 2024/1/29.
//
#include <stdio.h>
#include <stdarg.h>


int var(int,...);

int main() {
    var(5,1,2,3,4,5);

    return 0;
}
int var(int count,...){
    va_list varArr;//声明va_list变量  存储可变参数
    va_start(varArr,count);//初始化va_list变量 第一个是声明的可变参数变量 第二个参数是原函数可变参数前的参数
    for (int i = 0; i < count; ++i) {
        printf("%d",va_arg(varArr,int));//参数1是可变参数对象 参数2是当前可变参数的类型
    }
    va_end(varArr);//结束回收

}