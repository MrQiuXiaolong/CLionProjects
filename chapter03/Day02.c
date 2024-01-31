//
// Created by 邱小龙 on 2024/1/23.
//
#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
int test2();//先声明,后使用.

int main(){
    test2();
}

int test1(){
    int arr[ROW][COL]={1,2,3,
                       4,5,6,
                       7,8,9
    };

    //方式一
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("=============================\n");

    //方式二
    int *p=arr[0];
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            printf("%d\t",*(p+i*COL+j));
        }
        printf("\n");
    }
    printf("=============================\n");
    //方式三

    for (p=arr[0]; p < arr[0]+ROW*COL; ++p) {
        printf("%d\t",*p);
        if(*p%3==0){
            printf("\n");
        }
    }
}

int test2(){


        int rows, cols; // 定义二维数组的行和列

        printf("第一维为：");
        scanf("%d", &rows);
        printf("第二维为：");
        scanf("%d", &cols);

        int **array = (int **) malloc(sizeof(int *) * rows); // 先创建第一维
        printf("%d\n",sizeof(int *) * rows);
        for (int i = 0; i < rows; i++) {
            // 在内层循环中动态创建第二维
            array[i] = (int *) malloc(sizeof(int) * cols);

            for (int j = 0; j < cols; j++) {
                array[i][j] = 1;
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }

        // 释放内存
        for (int i = 0; i < rows; i++) {
            free(array[i]);
        }
        free(array);

        return 0;
}


