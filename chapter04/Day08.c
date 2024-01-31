//
// Created by ÇñĞ¡Áú on 2024/1/29.
//


#include <stdio.h>
int maxTest(int,int);

int main() {
    int x=10,y=20;

    int (*Max)(int,int);
    Max=&maxTest;
    int xyMax=(*Max)(x,y);


    printf("xyMax=%d",xyMax);

    return 0;
}
//º¯ÊıÖ¸Õë
int maxTest(int m,int n){

    return m>n?m:n;

}

