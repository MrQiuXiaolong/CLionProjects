//
// Created by 邱小龙 on 2024/1/29.
//


#include <stdio.h>
#include <stdlib.h>

void initArray(int *,int,int (*f)());
int getRandomValue();


int main() {
    int isArrayLen=10;
    int isArray[isArrayLen];
    initArray(isArray,isArrayLen,getRandomValue);

    for (int i = 0; i < isArrayLen; ++i) {
        printf("%d\t",isArray[i]);

        if(i+1==isArrayLen){
            printf("\n");
        }
    }

    return 0;
}

void initArray(int *arr,int len,int (*f)()){
    for (int i = 0; i < len; ++i) {
        arr[i]=(*f)();
    }


}
//获取随机数
int getRandomValue(){
    return rand();
}
