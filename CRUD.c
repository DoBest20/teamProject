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

    return 1;
    //grade�� �ִ� �Լ��� ���Ŀ� ����� ���� ����
    //return ���� �������� �ʾƼ� �ϴ� ���Ƿ� return���� �־����ϴ�. Ȯ�����ּ���.

}

//�Լ� ������ index���� �Է¹ް� �Ͽ� CRUD.h ���� Update�κ� ���ڰ� �����߽��ϴ�.
void Update(Stu* arr[]){
    int index;
    printf("������ ���ϴ� ��ȣ�� �Է����ּ��� :");
    scanf("%d",&index);
    printf("�л��� �̸��� �Է����ּ��� :");
    scanf("%s",arr[index]->name);
    printf("�߰���� ���� : ");
    scanf("%f",arr[index]->midterm);
    printf("�⸻��� ���� : ");
    scanf("%f",arr[index]->final);
    printf("�������� : ");
    scanf("%f",arr[index]->hw);
    printf("==>�����Ǿ����ϴ�.\n");
}