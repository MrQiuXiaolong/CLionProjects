//
// Created by ��С�� on 2024/1/27.
//
#include <stdio.h>


char *getWeekName(int);//������ ��ʹ��
char *getMonthName(int);
int isLeapYear(int);
int getTotalDaysOfMonth(int,int);

int main(){


    printf("%s", getWeekName(10));
    printf("%s", getMonthName(12));
    printf("%d\n", isLeapYear(2001));
    printf("%d", getTotalDaysOfMonth(2001,2));

}
char *getWeekName(int week){
    switch (week){
        case 1:
            return "����һ\n";
        case 2:
            return "���ڶ�\n";
        case 3:
            return "������\n";
        case 4:
            return "������\n";
        case 5:
            return "������\n";
        case 6:
            return "������\n";
        case 7:
            return "������\n";
        default:
            return "��������,����淶����1~7\n";
    }


}

char *getMonthName(int month){
    char *months[]={
        "һ��\n",
        "����\n",
        "����\n",
        "����\n",
        "����\n",
        "����\n",
        "����\n",
        "����\n",
        "����\n",
        "ʮ��\n",
        "ʮһ��\n",
        "ʮ����\n"
    };
    /*if(month>=1 && month<=12){
        return months[month-1];
    }
        return "��������Ч�·�,��������·ݲ�����\n";*/


    for (int i = 0; i < 12; ++i) {
            if(i == month-1){
                return months[i];
            }
    }
}

int isLeapYear(int year){
    //��ʾ���ܱ�4���������ܱ�100�����������ܱ�400��������ݣ���Ϊ���ꡣ

    if(year>=1900){
       return (year%4==0&&year%100!=0||year%400==0);
    }

    return -1;

    //return (year%4==0&&year%100!=0||year%400==0);

}

int getTotalDaysOfMonth(int year,int month){
    /*�ú�������һ����ݺ��·ݣ�������ָ���·ݵ���
���������������Ч���򷵻�-1��Ϊ�����־��
     *
     * */

    int *moths[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(isLeapYear(year)==1) {

        moths[1]++;

        return moths[month - 1];
    }else if(isLeapYear(year)==0){

        return moths[month-1];

    }else if(isLeapYear(year)==-1){
        return -1;
    }

}