//
// Created by 邱小龙 on 2024/1/21.
//
#include <stdio.h>
#define ROWS 3
#define CLOS 3
int main(){
    //bian();
    //zhuanHuan();
    jiao();
    return 0;
}

int bian(){
    int arr[ROWS][CLOS] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}
    };

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < CLOS; ++j) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

int zhuanHuan(){
    int arr[][CLOS] = {{1,2,3},
                           {4,5,6}
    };
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < CLOS; ++j) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("===============================\n");

    int arrCopy[ROWS][2];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < CLOS; ++j) {
            arrCopy[j][i]=arr[0[j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t",arrCopy[i][j]);
        }
        printf("\n");
    }

}

int jiao(){
    int yangHui[10][10];

    for (int i = 0; i < 10; ++i) {
        yangHui[i][0]=1;
        yangHui[i][i]=1;

        for (int j = 1; j < i; ++j) {
        yangHui[i][j]=yangHui[i-1][j-1]+yangHui[i-1][j];
        }
    }


    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d\t",yangHui[i][j],i,j);
        }
        printf("\n");
    }


}
