//
// Created by ��С�� on 2024/1/30.
//


#include <stdio.h>
struct Box{
    int length;//��
    int width;//��
    int height;//��
};
int getArea(struct Box box){
    return box.length*box.width*box.height;

}
int main() {
    struct Box box;
    printf("�밴˳�����볤���\n");
    scanf("%d %d %d",&box.length,&box.width,&box.height);

    int Area = getArea(box);
    printf("���Ϊ��%d",Area);

    return 0;
}