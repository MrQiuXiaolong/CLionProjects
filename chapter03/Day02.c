//
// Created by ��С�� on 2024/1/23.
//
#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
int test2();//������,��ʹ��.

int main(){
    test2();
}

int test1(){
    int arr[ROW][COL]={1,2,3,
                       4,5,6,
                       7,8,9
    };

    //��ʽһ
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("=============================\n");

    //��ʽ��
    int *p=arr[0];
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            printf("%d\t",*(p+i*COL+j));
        }
        printf("\n");
    }
    printf("=============================\n");
    //��ʽ��

    for (p=arr[0]; p < arr[0]+ROW*COL; ++p) {
        printf("%d\t",*p);
        if(*p%3==0){
            printf("\n");
        }
    }
}

int test2(){


        int rows, cols; // �����ά������к���

        printf("��һάΪ��");
        scanf("%d", &rows);
        printf("�ڶ�άΪ��");
        scanf("%d", &cols);

        int **array = (int **) malloc(sizeof(int *) * rows); // �ȴ�����һά
        printf("%d\n",sizeof(int *) * rows);
        for (int i = 0; i < rows; i++) {
            // ���ڲ�ѭ���ж�̬�����ڶ�ά
            array[i] = (int *) malloc(sizeof(int) * cols);

            for (int j = 0; j < cols; j++) {
                array[i][j] = 1;
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }

        // �ͷ��ڴ�
        for (int i = 0; i < rows; i++) {
            free(array[i]);
        }
        free(array);

        return 0;
}


