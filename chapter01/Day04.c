//
// Created by 邱小龙 on 2024/1/18.
//
//
// Created by 邱小龙 on 2024/1/18.
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
        printf("奖励一个斐济杯");
    }else if(sore > 80 && sore <= 99){
        printf("奖励一包华子");
    }else if(sore >= 60 && sore <= 80){
        printf("奖励一个三天不吃饭");
    }else{
        printf("社会的毒打");
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

    //穿透效果演示
    num=88;
    switch(num/10){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("不及格\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("及格\n");
            break;
    }
    switch(num/60){
        case 0:
            printf("不及格\n");
            break;
        case 1:
            printf("及格\n");
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
            printf("%d是水仙花\n",i);
        }
    }

    //最大公倍数和最小公约数
    int m,n;
    m=12;
    n=20;
    int min=(m<n) ? m : n;
    for (int i = min; i >= 1; --i) {
        if(m%i==0 && n%i==0){
            printf("最大公约数=%d\n",i);
            break;
        }
    }
    int max=(n>m) ? n:m;
    for (int i = max; i < m*n; ++i) {
        if(i%m==0 && i%n==0){
            printf("最小公倍数=%d\n",i);
            break;

        }
    }






}
//世界最高山峰是珠穆朗玛峰，它的高度是8848.86米，假如我有一张足够大的纸，它的厚度是0.1毫米。
int whileTest(){
    int sHeight=8848860;
    double zHeight=0.1;
    int count=0;//初始化

    while(zHeight < sHeight){
        count++;
        zHeight *= 2;

    }
    printf("折叠了%d\n",count);
    printf("多少米%lf\n",zHeight);


    int i=0;
    while (i!=0){
        printf("while-hhhh");
    }
    //do-while循环至少执行一次
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
        printf("\t1、存款\n");
        printf("\t2、取款\n");
        printf("\t3、显示余额\n");
        printf("\t4、退出\n");
        printf("请选择(1-4)：");

        scanf("%d",&selection);


        switch (selection) {
            case 1:
                printf("请输入存款金额\n");
                scanf("%lf",&add);

                if(add>0){
                    money+=add;
                    printf("存款成功\n");
                }else{
                    printf("请输入正确数据\n");
                }

                break;

            case 2:
                printf("请输入取款金额\n");
                scanf("%lf",&mov);

                if(mov>0 && money>=mov){
                    money-=mov;
                    printf("取款成功\n");
                }else{
                    printf("取款失败\n");
                }
                break;

            case 3:
                printf("当前余额$%lf\n",money);
                break;
            case 4:
                isFlag=0;
                break;
            default:
                printf("请再次输入正确的数据\n");
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

        int count=0;//计数
        //？？？？？sqrt
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i%j==0){
                count++;
                break;
            }
        }

        if (!count){
            printf("真真的质数为何物%d\n",i);
        }
    }

}
