//
// Created by ��С�� on 2024/1/18.
//
//
// Created by ��С�� on 2024/1/18.
//
#include <stdio.h>
#include <math.h>

int main(){
    //switchTest();
    //forTest();
    //whileTest();
    //atm();
    //san();
    zhi();
}


int ifTest(){
    int sore=80;
    if(sore==100){
        printf("����һ��쳼ñ�");
    }else if(sore > 80 && sore <= 99){
        printf("����һ������");
    }else if(sore >= 60 && sore <= 80){
        printf("����һ�����첻�Է�");
    }else{
        printf("���Ķ���");
    }
    return  0;
}
int switchTest(){
    int num=1;
    switch(num){
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("no\'no\'no\n");

    }

    //��͸Ч����ʾ
    num=88;
    switch(num/10){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("������\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("����\n");
            break;
    }
    switch(num/60){
        case 0:
            printf("������\n");
            break;
        case 1:
            printf("����\n");
            break;
    }
}

int forTest(){
    int ge,shi,bai;
    for (int i = 100; i < 1000; ++i) {
        ge=i%10;
        shi=i/10%10;
        bai=i/100;

        if( (ge*ge*ge)+(shi*shi*shi)+(bai*bai*bai)==i) {
            printf("%d��ˮ�ɻ�\n",i);
        }
    }

    //��󹫱�������С��Լ��
    int m,n;
    m=12;
    n=20;
    int min=(m<n) ? m : n;
    for (int i = min; i >= 1; --i) {
        if(m%i==0 && n%i==0){
            printf("���Լ��=%d\n",i);
            break;
        }
    }
    int max=(n>m) ? n:m;
    for (int i = max; i < m*n; ++i) {
        if(i%m==0 && i%n==0){
            printf("��С������=%d\n",i);
            break;

        }
    }






}
//�������ɽ������������壬���ĸ߶���8848.86�ף���������һ���㹻���ֽ�����ĺ����0.1���ס�
int whileTest(){
    int sHeight=8848860;
    double zHeight=0.1;
    int count=0;//��ʼ��

    while(zHeight < sHeight){
        count++;
        zHeight *= 2;

    }
    printf("�۵���%d\n",count);
    printf("������%lf\n",zHeight);


    int i=0;
    while (i!=0){
        printf("while-hhhh");
    }
    //do-whileѭ������ִ��һ��
    i=0;
    do{
        printf("do-while-hhhh");

    }while(i!=0);


}

int atm(){

    int selection;
    int isFlag;
    double money=0.0;
    double add,mov;

    do {

        printf("=========ATM========\n");
        printf("\t1�����\n");
        printf("\t2��ȡ��\n");
        printf("\t3����ʾ���\n");
        printf("\t4���˳�\n");
        printf("��ѡ��(1-4)��");

        scanf("%d",&selection);


        switch (selection) {
            case 1:
                printf("����������\n");
                scanf("%lf",&add);

                if(add>0){
                    money+=add;
                    printf("���ɹ�\n");
                }else{
                    printf("��������ȷ����\n");
                }

                break;

            case 2:
                printf("������ȡ����\n");
                scanf("%lf",&mov);

                if(mov>0 && money>=mov){
                    money-=mov;
                    printf("ȡ��ɹ�\n");
                }else{
                    printf("ȡ��ʧ��\n");
                }
                break;

            case 3:
                printf("��ǰ���$%lf\n",money);
                break;
            case 4:
                isFlag=0;
                break;
            default:
                printf("���ٴ�������ȷ������\n");
                break;

        }


    }while(isFlag);



}

int san(){
    for (int i = 0; i < 5; ++i) {
        for (int j = 5; j > i ; --j) {
            printf("*");
        }
        printf("\n");
    }

}

int zhi(){


    for (int i = 100; i <= 200; ++i) {

        int count=0;//����
        //����������sqrt
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i%j==0){
                count++;
                break;
            }
        }

        if (!count){
            printf("���������Ϊ����%d\n",i);
        }
    }

}
