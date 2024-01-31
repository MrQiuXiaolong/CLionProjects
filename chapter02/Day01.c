//
// Created by 邱小龙 on 2024/1/19.
//
#include <stdio.h>
#include <math.h>
//评委打分   数组翻转
int main(){

    //max();
    //min();
    //pinWei();
    fanZhuan();

    return 0;
}
int max(){
    int arr[]={10,56,98,45,87,36,79,58,49,855};

    size_t len=sizeof(arr)/sizeof(int);//用sizeof定义出数组的长度 sizeof的返回类型为size_t
    int max=arr[0];
    for (int i = 0; i < len; ++i) {
        if(max<arr[i]){
            max=arr[i];
        }

    }
    printf("max is = %d\n",max);

    printf("%lf\n",sqrt((103+0.00)));
}

int min(){
    int arr[]={10,56,98,45,87,36,79,58,49,855};

    size_t len=sizeof(arr)/sizeof(int);//用sizeof定义出数组的长度 sizeof的返回类型为size_t
    int min=arr[0];
    for (int i = 0; i < len; ++i) {
        if(min>arr[i]){
            min=arr[i];
        }

    }
    printf("min is = %d\n",min);



}

int pinWei(){
    double arr[]={10.0,9.8,8.7,8.2,6.7,9.6,9.4,8.5,9.6,8.1};
    double max=arr[0],min=arr[0];
    double sum=0.0;
    double aa=0.0;
    size_t len= sizeof(arr)/sizeof(double);

    for (int i = 0; i < len; ++i) {
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
        sum+=arr[i];
    }

    double age=(sum-max-min)/len;
    printf("%zd\n",len);
    printf("max=%lf\n",max);
    printf("min=%lf\n",min);
    printf("平均分为=%.2lf\n",age);

}

int fanZhuan(){
    int arr[]={10,56,98,45,87,36,79,58,49,999};
    int temp=0;
    size_t len=sizeof(arr)/sizeof(int);
    /*for (int i = 0; i < len/2; ++i) {
        temp=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=temp;
    }
    for (int i = 0; i < len; ++i) {
        printf("%d\t",arr[i]);
    }*/

    printf("\n<==============================>\n");


    temp=0;
    for (int i = 0,j=len-1;  i < len/2, j >= len-len/2;  ++i,--j) {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i = 0; i < len; ++i) {
        printf("%d\t",arr[i]);
    }
}