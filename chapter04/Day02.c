//
// Created by 邱小龙 on 2024/1/27.
//
#include <stdio.h>


char *getWeekName(int);//先声明 在使用
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
            return "星期一\n";
        case 2:
            return "星期二\n";
        case 3:
            return "星期三\n";
        case 4:
            return "星期四\n";
        case 5:
            return "星期五\n";
        case 6:
            return "星期六\n";
        case 7:
            return "星期七\n";
        default:
            return "输入有误,请你规范输入1~7\n";
    }


}

char *getMonthName(int month){
    char *months[]={
        "一月\n",
        "二月\n",
        "三月\n",
        "四月\n",
        "五月\n",
        "六月\n",
        "七月\n",
        "八月\n",
        "九月\n",
        "十月\n",
        "十一月\n",
        "十二月\n"
    };
    /*if(month>=1 && month<=12){
        return months[month-1];
    }
        return "请输入有效月份,您输入的月份不存在\n";*/


    for (int i = 0; i < 12; ++i) {
            if(i == month-1){
                return months[i];
            }
    }
}

int isLeapYear(int year){
    //提示：能被4整除但不能被100整除，或者能被400整除的年份，即为闰年。

    if(year>=1900){
       return (year%4==0&&year%100!=0||year%400==0);
    }

    return -1;

    //return (year%4==0&&year%100!=0||year%400==0);

}

int getTotalDaysOfMonth(int year,int month){
    /*该函数接收一个年份和月份，并返回指定月份的总
天数。如果输入无效，则返回-1作为错误标志。
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