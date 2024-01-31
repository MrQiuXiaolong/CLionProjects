//
// Created by 邱小龙 on 2024/1/30.
//


#include <stdio.h>
struct Box{
    int length;//长
    int width;//宽
    int height;//高
};
int getArea(struct Box box){
    return box.length*box.width*box.height;

}
int main() {
    struct Box box;
    printf("请按顺序输入长宽高\n");
    scanf("%d %d %d",&box.length,&box.width,&box.height);

    int Area = getArea(box);
    printf("面积为：%d",Area);

    return 0;
}