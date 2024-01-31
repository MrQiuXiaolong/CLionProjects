//
// Created by 邱小龙 on 2024/1/27.
//
#include <stdio.h>
//值传递和地址传递
int main(){
    int a = 10;
    int b = a;
    printf("a = %d\n",a);
    b = 20;
    printf("a = %d\n",a);


    int arr[]={1,2,3,4,5};
    int *p=arr;
    for (int i = 0; i < sizeof(arr)/sizeof(int); ++i){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    *p+=3;
    for (int i = 0; i < sizeof(arr)/sizeof(int); ++i){
        printf("%d\t",arr[i]);
    }

    return 0;
}