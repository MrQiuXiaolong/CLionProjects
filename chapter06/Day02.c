//
// Created by ��С�� on 2024/2/3.
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
    //�򿪸��ļ�
    filepath = fopen(path,"w");

    //������д�뵽�ļ���

    fputs("��ã���������\n", filepath);
    fprintf(filepath, "��ã����磡��\n");

    fclose(filepath);//�ر���

    printf("д��ɹ�");
}
void out(){

    String path = "F:\\oi\\hello.txt";
    FILE *filepath=NULL;
    //�򿪸��ļ�
    filepath = fopen(path,"r");

    //���建����
    char buff[1024];

    while(fgets(buff,1024,filepath)!=NULL){
        printf("%s", buff);
    }

    fclose(filepath);//�ر���
}