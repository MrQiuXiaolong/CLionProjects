//
// Created by ��С�� on 2024/1/24.
//
#include <stdio.h>
#include <math.h>

//��֤��°ͺղ���

int prime(int);
int main(){
    printf("����һ������2��ż��");
    int ou;
    scanf("%d",&ou);

    for (int i = 2; i < ou; ++i) {
        if(prime(i)&& prime(ou-i)){//ou-i��ԭ����8=2+6  ����������Ļ��ͻ��Ϊ8=2+8 ������+1 �����͵�-�����������ϵ��� ʹʽ�ӳ���
            printf("%d=%d+%d\n",ou,i,ou-i);

        }

    }


}
int prime(int num){
    for (int i = 2; i <= sqrt(num); ++i) {
        if(num%i==0){
            return 0;
        }

    }
    return 1;
}
