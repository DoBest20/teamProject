#include "Grade.h"
#include "CRUD.h"
#include "Graph.h"
//#include "Search.h"
//#include "File.h"
#include <stdio.h>

int selectMenu(){
    int menu;
    printf("\n*** �л� �������� ���α׷� ***\n");
    printf("1. ��ȸ\n");
    printf("2. �߰�\n");
    printf("3. ����\n");
    printf("4. ����\n");
    printf("5. ���� ĿƮ���� �缳��\n");
    printf("6. �׷���\n");
    printf("0. ����\n\n");
    printf("=> ���ϴ� �޴���? ");
    scanf("%d", &menu);
    return menu;
}

int main(){

    Stu *sp[20]; int gradeCut[4] = {90,80,70,60};
    int count = 0,index =0,
        menu;
 
    while (1){
        menu = selectMenu();
        if (menu == 0) break;
        if(menu ==1 || menu ==3|| menu == 4)
            if (count ==0) continue;
        if (menu == 1 ){
            if(count > 0)
                Read(sp,index);
        }
        else if (menu == 2){
            index += Create(gradeCut,sp,index);
            ++ count;
        }
        else if (menu == 3 ){
            Update(gradeCut,sp);
        }
        else if (menu == 4 )
            count -= Delete(sp,index);
        else if (menu == 5){
            setGradeCutline(gradeCut);
            for(int i=0;i<index;i++){
                if(sp[i] == NULL) continue;
                setGrade(gradeCut,sp,i);
            }
        }
        else if(menu == 6){
            Graph(sp,index);
        }
    }
    printf("�����!\n");
    return 0;
}