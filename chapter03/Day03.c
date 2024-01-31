//
// Created by 邱小龙 on 2024/1/24.
//
#include <stdio.h>

int main(){


    //pointerArr();
    pointerChar();


    return 0;
}

int pointerArr(){
    //创建一维数组
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    int arr3[]={7,8,9};

    //创建一个指针数组
    int *pointer[3];
    pointer[0]=arr1;
    pointer[1]=arr2;
    pointer[2]=arr3;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t",*(pointer[i]+j));//pointers[0]代表pointers[0][0]的地址,通过+1找到pointers[0][1]的地址在取值(*)

        }
        printf("\n");
    }

}

int pointerChar(){
    char arr1[]="hello word";

    //arr1="www"; 字符串是常量不可更改值
    //通过指针可以更改
    char *p="hello word";
    printf("%s\n",p);
    p="Hi QiuXiaoLong";
    printf("%s\n",p);

    char *weekdays[] = {  //行数7也可以省略
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
    };

    for (int i = 0; i < 7; ++i) {
        printf("%s\n",weekdays[i]);
    }
}
