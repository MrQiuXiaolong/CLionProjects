//
// Created by ��С�� on 2023/12/18.
//
/*
 * ����=�㷨+���ݽṹ
 * ���ݵ����ͺ����ݵ���֯��ʽ,�������ݽṹ

 * ʲô���㷨?
 * ���ĳ������Ĳ���
 *
 * ʲô�нṹ���㷨��ΪʲôҪ�ᳫ�ṹ���㷨?
 * ��һ����Ĺ��ܵ�ʵ�ַָ�Ϊ����С���ܵ�ʵ��
 * ���ڱ�д,�Ķ�,�޸ĺ�ά��.���ٳ������Ļ���,��߳���ɶ���
 */
#include <stdio.h>
int main(){

//jie();
duo();
}
int jie(){
    int sum=1,sum2=1;
    for (int i = 1; i <= 5; ++i) {
        sum*=i;
    }

    for (int i = 1; i <= 5; i+=2) {
        sum2*=i;
    }
    printf("sum�ܺ�Ϊ��%d\n",sum);
    printf("sum2�ܺ�Ϊ��%d\n",sum2);

}

int duo(){
    int sign=1;
    double sum=1.0,term;
    for (double i = 2.0; i <= 100; ++i) {
        sign=-sign;
        term=sign/i;
        sum=sum+term;
        printf("term=%.10lf\n",term);
    }
    printf("sum=%lf\n",sum);
}
