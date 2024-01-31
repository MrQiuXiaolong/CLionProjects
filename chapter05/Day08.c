//
// Created by 邱小龙 on 2024/1/31.
//


#include <stdio.h>
struct Student {
    int id;
    char name[20];
    char gender;
} stu[3] = {{1001, "Tom",'M'},
            {1002, "Jerry",'M'},
            {1003, "Lily",'F'}
};

int main() {
    //方式一
    for (int i = 0; i < 3; ++i) {
        printf("%d,%s,%c\n", stu[i].id, stu[i].name,stu[i].gender);

    }
    printf("================================\n");
    //方式二
    struct Student *stuP=stu;
    for (int i = 0; i < 3; ++i) {
        printf("%d,%s,%c\n", stuP[i].id,stuP[i].name,stuP[i].gender);
    }
    //方式三
    printf("================================\n");
    for(stuP = stu;stuP<stu+3;stuP++){
        printf("%d,%s,%c\n",stuP->id,stuP->name,stuP->gender);
    }

    return 0;
}