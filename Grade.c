#include "Grade.h"

//�ϳ��� �����Ϳ� ���ؼ��� grade�� �����ϵ��� ����� ���ҽ��ϴ�. 

void setGrade(int gradeCut[],Stu* arr[],int index){
    int total = arr[index]->midterm + arr[index]->final + arr[index]->hw;
    if(total >= gradeCut[0]) arr[index]->grade = 'A';
    else if(total >= gradeCut[1]) arr[index]->grade = 'B';
    else if(total >= gradeCut[2]) arr[index]->grade = 'C';
    else if(total >= gradeCut[3]) arr[index]->grade = 'D';
    else arr[index]->grade = 'F';
}