//
// Created by 邱小龙 on 2024/1/27.
//
#include <stdio.h>

int maxTest(int *,int);
int main() {
    int arr[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d",&arr[i]);
    }

    printf("%d",maxTest(arr,5));
    return 0;
}

int maxTest(int *p,int Len){
    int max=*p;
    printf("max=%d\n",max);
    for (int i = 1; i < Len; ++i) {
        if(max  <  *(p+i)){
            max  =  *(p+i);
        }
    }
    return max;
}