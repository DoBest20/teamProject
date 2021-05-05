#include "CRUD.h"
#include <stdio.h>
#include <stdlib.h>

int Create(Stu* arr[],int index){
    arr[index] = (Stu*)malloc(sizeof(Stu));

    printf("학생의 이름을 입력해주세요 :");
    scanf("%s",arr[index]->name);
    printf("중간고사 성적 : ");
    scanf("%f",arr[index]->midterm);
    printf("기말고사 성적 : ");
    scanf("%f",arr[index]->final);
    printf("과제점수 : ");
    scanf("%f",arr[index]->hw);

    return 1;
    //grade를 주는 함수를 추후에 만들고 넣을 예정
    //return 값이 존재하지 않아서 일단 임의로 return값을 넣었습니다. 확인해주세요.

}

//함수 내에서 index값을 입력받게 하여 CRUD.h 에서 Update부분 인자값 수정했습니다.
void Update(Stu* arr[]){
    int index;
    printf("수정을 원하는 번호를 입력해주세요 :");
    scanf("%d",&index);
    printf("학생의 이름을 입력해주세요 :");
    scanf("%s",arr[index]->name);
    printf("중간고사 성적 : ");
    scanf("%f",arr[index]->midterm);
    printf("기말고사 성적 : ");
    scanf("%f",arr[index]->final);
    printf("과제점수 : ");
    scanf("%f",arr[index]->hw);
    printf("==>수정되었습니다.\n");
}