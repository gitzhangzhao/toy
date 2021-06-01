#include<stdlib.h>
#include<stdio.h>
struct Info
{
    int a;
    struct Info* next;
};

void addInfo(struct Info* students, int a)//students是头指针
{
    struct Info* info, *temp;
    info = (struct Info*)malloc(sizeof(struct Info));
    if (info == NULL)
    {
        printf("内存分配失败！\n");
        exit(1);
    }

    info->a = a;
    if (students->next != NULL)
    {
        temp = students->next;
        students->next = info;
        info->next = temp;
    }

    else
    {
        students->next = info;
        info->next = NULL;
    }
}

void main(){
    int num=10;
    struct Info info={0,};
    while(num-- != 1)
    addInfo(&info, num);
    struct Info *tmp = &info;
    while(tmp->next != NULL){
        printf("%d\n",tmp->a);
        tmp = tmp->next;
    }
}
