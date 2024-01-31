//
// Created by 邱小龙 on 2024/1/31.
//


#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct StudentNode{
    int id;
    char name[20];
    struct StudentNode *next; //创建节点
}StuNode;

int main() {
    StuNode *head;
    head = (StuNode *)malloc(sizeof(StuNode));//动态的分配内存空间
    head->id = 1001;
    strcpy(head->name, "LISA");


    StuNode *p = (StuNode *)malloc(sizeof(StuNode));
    p->id = 1002;
    strcpy(p->name, "Jerry");

    head->next = p;

    p = (StuNode *)malloc(sizeof(StuNode));
    p->id = 1003;
    strcpy(p->name, "ROSE");
    head->next->next=p;


    StuNode *cur;
    for (cur = head; cur != NULL; cur = cur->next) {
        printf("id = %d,name = %s\n", cur->id, cur->name);
    }



    return 0;
}