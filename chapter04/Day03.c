//
// Created by 邱小龙 on 2024/1/27.
//
#include <stdio.h>

int main(int argc, char *argv[]){
    //argc 表示传入参数的个数 至少是1
    //argv 表述指针数组

    printf("argc=%d\n",argc);
    for (int i = 0; i < argc; ++i){
        printf("%s\n",argv[i]);
    }

    return 0;
}
