#include "CRUD.h"
#include <stdio.h>
#include <stdlib.h>

int Create(Stu* arr[],int index){
    arr[index] = (Stu*)malloc(sizeof(Stu));

    printf("�л��� �̸��� �Է����ּ��� :");
    scanf("%s",arr[index]->name);
    printf("�߰���� ���� : ");
    scanf("%f",arr[index]->midterm);
    printf("�⸻��� ���� : ");
    scanf("%f",arr[index]->final);
    printf("�������� : ");
    scanf("%f",arr[index]->hw);

    //grade�� �ִ� �Լ��� ���Ŀ� ����� ���� ����

}
