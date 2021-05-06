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

void Read(Stu* arr[]){
    for(int i=0;i<sizeof(arr)/sizeof(Stu*);i++){
        if(arr[i] == NULL) continue;
        printf("%s %.1f %.1f %.1f %.1f %c",arr[i]->name,arr[i]->midterm,arr[i]->
        final,arr[i]->hw,arr[i]->grade);
    }
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

int Delete(Stu* arr[],int index){
    int check;
    printf("������ �����Ͻðڽ��ϱ�?(�� : 1, �ƴϿ� : 2)");
    scanf("%d",&check);

    if(check == 1){
        arr[index]->midterm = -1;
        arr[index]->final = -1;
        arr[index]->hw = -1;
        printf("==> �����Ǿ����ϴ�.\n");
    }
    else if(check == 2){
        printf("��ҵǾ����ϴ�.\n");
    }
    return 1;
}
