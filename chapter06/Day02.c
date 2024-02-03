//
// Created by 邱小龙 on 2024/2/3.
//


#include <stdio.h>
typedef char* String;

void write();
void out();

int main() {
    //write();
    out();
    return 0;
}
void write(){
    String path = "F:\\oi\\hello.txt";
    FILE *filepath=NULL;
    //打开该文件
    filepath = fopen(path,"w");

    //将内容写入到文件中

    fputs("你好，北京！！\n", filepath);
    fprintf(filepath, "你好，世界！！\n");

    fclose(filepath);//关闭流

    printf("写入成功");
}
void out(){

    String path = "F:\\oi\\hello.txt";
    FILE *filepath=NULL;
    //打开该文件
    filepath = fopen(path,"r");

    //定义缓冲区
    char buff[1024];

    while(fgets(buff,1024,filepath)!=NULL){
        printf("%s", buff);
    }

    fclose(filepath);//关闭流
}