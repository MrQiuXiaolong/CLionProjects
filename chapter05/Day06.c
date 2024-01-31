//
// Created by ÇñÐ¡Áú on 2024/1/31.
//


#include <stdio.h>
#include <string.h>

struct Dog{
    char name[20];
    int age;
};
char* say(struct Dog dog){
    static char info[100];
    sprintf(info,"name=%s,age=%d",dog.name,dog.age);
    return info;
}

int main() {
    struct Dog dog={.name="´ó»Æ",.age=18};
    char* infoCopy = say(dog);
    printf("%s",infoCopy);
    return 0;
}