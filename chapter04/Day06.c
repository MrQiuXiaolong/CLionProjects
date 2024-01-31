//
// Created by 邱小龙 on 2024/1/29.
//


#include <stdio.h>
int getSum(int);
int getFactorial(int);
int fibo(int);

int main() {

    printf("%d\n",getSum(3));
    printf("%d\n",getFactorial(5));
    printf("%d\n", fibo(5));

    return 0;
}
//计算1~n的和
int getSum(int n){

    if(n==1){//递归停止的条件,没有条件就会一直执行下去,导致栈溢出
        return 1;
    }

    return getSum(n-1)+ n;
    /*      进栈            出栈(return开始返回值,相当于出栈)
     *      2+3             1+2
     *      1+2             3+3
     *    n==1(出栈)
     * */

}

//计算阶乘
int getFactorial(int n){

        if(n==1){
            return 1;
        }

        return getFactorial(n-1)*n;
}

//1,1,2,3,5,8,13,21,34,55

int fibo(int n){
    if(n == 1 || n == 2){
        return 1;
    }

    //使用递归
    return fibo(n-1) + fibo(n-2);

    /*
    //使用迭代方式
    int a=1;
    int b=1;
    int temp;
    for (int i = 3; i <= n; ++i) {
        temp=(a+b);
        a=b;
        b=temp;
    }
    printf("%d",temp);
    */


}