//
// Created by 邱小龙 on 2024/1/21.
//
#include <stdio.h>
#define LEN sizeof(arr)/sizeof(int)
//指针遍历数组
int main(){
    int arr[] ={1,2,3,4,5};
    int *p=arr;


    //指针遍历1
    for (int i = 0; i < LEN; ++i) {
        printf("%d\t",*(p+i));
    }

    printf("\n");

    //指针遍历2
    for (p = arr; p < arr+LEN; ++p) {
        printf("%d\t",*p);
    }

    printf("\n");

    int a=10;
    int *p1=&a;
    *p1=30;
    printf("%d\n",a);
}
