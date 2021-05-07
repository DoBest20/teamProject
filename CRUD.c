#include "CRUD.h"
#include <stdio.h>
#include <stdlib.h>

int Create(Stu* arr[],int index){
    arr[index] = (Stu*)malloc(sizeof(Stu));

    printf("�л��� �̸��� �Է����ּ��� :");
    scanf("%s",arr[index]->name);
    printf("�л��� �й��� �Է����ּ��� :");
    scanf("%d",arr[index]->id);
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

void Read(Stu* arr[]){ //�й��� �츮�б�ó�� 8�ڸ��� �����ϰ� ��������ϴ�. 
    printf("N0. �̸�  �й�      �߰���� �⸻��� ���� ����\n");
    printf("==============================================\n");
    for(int i=0;i<sizeof(arr)/sizeof(Stu*);i++){
        if(arr[i] == NULL) continue;
        printf("%2d. %3s %8d %4.1f %4.1f %4.1f %c\n",i+1,arr[i]->name,arr[i]->id,arr[i]->midterm,arr[i]->
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
    printf("�л��� �й��� �Է����ּ��� :"); //���� �й��� �ƿ� ��԰� �־��׿� ���� ��� �߰��ؼ� �����߽��ϴ�. 
    scanf("%d",arr[index]->id);
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
        free(arr[index]); // ������ �����Ҵ� ������ �����Ͽ����ϴ�. Ȯ�����ּ���
        arr[index] = NULL;
        printf("==> �����Ǿ����ϴ�.\n");
        return 1;
    }
    else if(check == 2){
        printf("��ҵǾ����ϴ�.\n");
    }

    return 0; // ������ �� ��쿡�� 1�� , �׷��� ���� ��쿡�� 0�� �����ϵ��� ����(main�� index���� �����ϱ� ����)�Ͽ����ϴ�.
    
}
