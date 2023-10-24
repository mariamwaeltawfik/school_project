#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include"sstudent.h"
#include<unistd.h>
int nOfSchool=10;
int number;
struct student school[1000]=
{
    {"mariam wael",23,"01023635197"},
    {"ahmed mohamed",21,"01023635198"},
    {"nada ahmed",20,"01023635199"},
    {"tawfiq elshikh",30,"01023635194"},
    {"mohamed ali",23,"01023635183"},
    {"taha mohamed",24,"01023635493"},
    {"marea",25,"01023835193"},
    {"khaled hany",20,"01023631193"},
    {"maher jamil",26,"01023695193"},
    {"jasmeen samir",22,"01063635193"},

};

int main()
{
   log_In();
    while(1)
    {

        printf("ENTER NUMBER: ");
        scanf("%d",&number);
        printf("\n");
        if(number==1)
        {
            system("cls");
            student_scanByRef(school);
            char cont;
            fflush(stdin);
            printf(">>TO CONTENUE ADDING ENTER >>1  \n\n");
            printf(">>TO BACK TO MENU ENTER >> 0  \n\n");
            scanf("%d",&cont);
            if(cont==1)
            {
                system("cls");
                student_scanByRef(school);
                system("cls");
                menu();
            }
            else
            {
                system("cls");
                menu();

            }
        }
else if(number==2){
system("cls");
int n;
printf("ENTER 1 TO EDIT NAME\n");
printf("ENTER 2 TO EDIT AGE\n");
printf("ENTER 3 TO EDIT PHONE\n");
printf("\nENTER NUMBER: ");
scanf("%d",&n);
printf("\n\n");
int id_edit;
    printf("ENTER ID:");
    scanf("%d",&id_edit);
    printf("\n\n");
edit_student(school,id_edit-1,n);
}
else if(number==3){
         system("cls");
    int id_print;
    printf("ENTER ID:");
    scanf("%d",&id_print);
    printf("\n\n");
    print_student(school,id_print-1);

}
else if(number==4){
     system("cls");
    student_printAll(school);
}
else if(number==5){
system("cls");
int id_remove;
    printf("ENTER ID:");
    scanf("%d",&id_remove);
    printf("\n\n");
remove_student(school,id_remove-1);

}
else if(number==6){
        int b;
        char search[20];
      system("cls");
printf("ENTER NAME:");
   string_scan(search,20);
printf("\n\n");
int x=find_Name_inStruct(school,nOfSchool,search);
if(x!=(-1)){
        printf("STUDENT EXCISTS AND HIS ID IS: %d\n\n",x+1);
    print_student(school,x);
}
else{
  printf("STUDENT DOESN'T EXCIST \n");
  printf("\n\n\n                              TO MENU >>1 \n");
scanf("%d",&b);
if(b==1){
     system("cls");
 menu();
}
}

}
else if(number==7){
     system("cls");
 int id_phone;
    printf("ENTER ID:");
    scanf("%d",&id_phone);
    printf("\n\n");
    phone_student(school,id_phone-1);
}

    }





return 0;
}

