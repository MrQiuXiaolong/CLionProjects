//
// Created by ��С�� on 2023/12/20.
//

/*
 * ��ϵ��������ȼ�
 * ��ֵ����� < �߼������ < ��ϵ����� < ��������� < !(��)
 * �ù�ϵ�������������ֵ����������ʽ�Ӿ��Ǳ��ʽ
 */
#include <stdio.h>
#include <math.h>
int main(){
    //printf("�����뷽��ʽa b c");
    //double a,b,c;
    //scanf("%lf %lf %lf",&a,&b,&c);
    //equation(a,b,c);
    //sort();
    //abc();
    //wendu();
    lian();

}
//һԪ���η���
int equation(double a,double b,double c){

    double Delta,x1,x2;
    Delta=b*b-4.0*a*c;
    printf("Delta=%.8lf\n",Delta);
    if(Delta>0){
        printf("Delta>0������������\n");
        x1=(-b+sqrt(Delta))/2*a;
        x2=(-b-sqrt(Delta))/2*a;
        printf("x1=%.8lf,x2=%.8lf\n",x1,x2);
    }else if(Delta==0){
        printf("Delta=0������һ����\n");
        x1=(-b+sqrt(Delta))/2*a;
        x2=x1;
        printf("x1=%.8lf,x2=%.8lf\n",x1,x2);
    }else{
        printf("DeltaС��0,�����޽�\n");
    }

}
//�ɴ�С�����˳�������
int sort(){
    int a=4,b=5;

    if(a>b){
        printf("a\nb");
    }else{
        printf("b\na");
    }

}
int abc(){
    int a=3,b=4,c=5;
    printf("%d\n",a+b>c&&b==c);
    printf("%d\n",a||b+c&&b-c);
    printf("%d\n",!(a>b)&&!c||1);
    printf("%d\n",!(a+b)+c-1&&b+c/2);
}
//�¶�ת��
int wendu(){
    float hua=64.0f;

    float she=5.0/9*(hua-32);

    printf("ת������¶�Ϊ=%30.2lf\n",she);
    char c1=65;
    printf("c1=%c",c1);



}

int lian(){
    /*int a=11;
    int b=3;
    printf("a/b=%d\n",a/b);//��������������

    int hours = 89;
    int day = hours/24;
    int hours1 = hours%24;
    printf("����%d��%dСʱ\n",day,hours1);


    int a1=5,b1=3;
    printf("a=%d,b=%d\n",a1,b1);
    a1=a1+b1;//8
    b1=a1-b1;//5
    a1=a1-b1;//3
    printf("a=%d,b=%d\n",a1,b1);*/


    int x=53;
    printf("%d,%c\n",x,x);
    x=x&128;
    printf("%d,%c\n",x,x);
    if(x==0)
        printf("���λΪ0\n");
    else
        printf("���λ1\n");


    size_t cap=sizeof(char);
    printf("cap=%zd\n",cap);



}
