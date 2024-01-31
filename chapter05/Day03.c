//
// Created by 邱小龙 on 2024/1/30.
//


#include <stdio.h>
#include <string.h>

struct Name{
    char last[10];
    char name[10];
};

struct Person{
    int id;
    struct Name name;
    int age;
};
int main() {
    struct Person person={.id=1000,.age=20};

    strcpy(person.name.last,"上官");
    strcpy(person.name.name,"婉儿");
    printf("id=%d,姓名[%s,%s],年龄=%d",person.id,person.name.last,person.name.name,person.age);
    return 0;
}