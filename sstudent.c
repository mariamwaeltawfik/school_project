#include <stdio.h>
#include <stdlib.h>
#include "sstudent.h"
#include <windows.h>
#include<unistd.h>
void print_str(char *str){
int j;
for(j=0;str[j];j++){
    printf("%c",str[j]);
}
}

int compare_str(char *str1,char *str2){
int i,f=0;

for(i=0;str1[i]||str2[i];i++){

        if(str1[i]!=str2[i]){
            return 0;
        }

}
 return 1;
}
void string_scan(char*str,int maxSize)
{
    int i=0;
    fflush(stdin);
    scanf("%c",&str[i]);
    for(; str[i]!='\n';)
    {
        i++;
        scanf("%c",&str[i]);
        if(i==maxSize-1)
        {
            break;
        }
    }
    str[i]=0;
}
void print_student(struct student *s,int id)
{
    int b;
    printf("NAME: ");
    print_str((s[id].name));
    printf("\n");
    printf("ID: %d\n",id+1);
    printf("AGE: %d\n",(s[id].age));
    printf("PHONE: %s\n",(s[id].phone));
    printf("_________________________\n");
    printf("\n\n                                    TO MENU >>1 \n");
    scanf("%d",&b);
    if(b==1)
    {
        system("cls");
        menu();
    }

}

void student_scanByRef(struct student *ps)
{

    printf("ENTER NAME: ");
    string_scan(ps[nOfSchool].name,20);
    printf("ENTER AGE:");
    scanf("%d",&ps[nOfSchool].age);
    fflush(stdin);
    printf("ENTER PHONE: ");
    string_scan(ps[nOfSchool].phone,12);
    printf("\n");
    nOfSchool++;
}
void student_printAll(struct student *arr)
{
    int i,b;
    printf("_______________________________________________________________\n");
    for(i=0; i<nOfSchool; i++)
    {
        printf("|NAME:%-15s |  ID:%2d |  AGE:%2d |  PHONE:%s |\n",arr[i].name,i+1,arr[i].age,arr[i].phone);
        printf("_______________________________________________________________\n");
    }
printf("\n\n                                    TO MENU >>1 \n");
        scanf("%d",&b);
        if(b==1)
        {
            system("cls");
            menu();
        }

}






int find_Name_inStruct(struct student *arr,int size,char *s)
{

    int i;
    for(i=0; i<size; i++)
    {
        if(compare_str(arr[i].name,s))
        {
            return i;
        }
    }
    return -1;
}
void menu()
{
    int n;
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> STUDENTS SYSTEM <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n\n");
    printf(">>> CLICK > 1 < TO ADD STUDENT.\n\n");
    printf(">>> CLICK > 2 < TO EDIT STUDENT.\n\n");
    printf(">>> CLICK > 3 < TO PRINT STUDENT.\n\n");
    printf(">>> CLICK > 4 < TO PRINT ALL STUDENTS.\n\n");
    printf(">>> CLICK > 5 < TO REMOVE STUDENT.\n\n");
    printf(">>> CLICK > 6 < TO SEARCH STUDENT.\n\n");
    printf(">>> CLICK > 7 < TO CALL STUDENT.\n\n");

    printf("                                                  BACK-> 0 \n\n");




}
void log_In()
{
    char name[5];
    char pass[5];
    printf("\n\n\n\n\n\n\n\n\n\n                                                      login\n\n");
    printf("                                           ENTER NAME: ");
    scanf("%s",&name);
    printf("\n");
    printf("                                           ENTER PASS: ");
    scanf("%s",&pass);
    printf("\n");
    if(compare_str(name,"user")&&compare_str(pass,"user"))
    {
        system("cls");
        menu();
    }
    else
    {
        printf("\n\n                                            TRY AGAIN \n");
        system("cls");
        log_In();
    }
}
void phone_student(struct student *cal,int id)
{

    int i,b;
    printf("                      CALLING  %s  ",cal[id].phone);
    for(i=0; i<3; i++)
    {
        //  printf("CALLING\n");
        printf("  ");
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(". ");
        sleep(1);

    }
    printf("\n\n\n                                    NO ANSWER\n");
    printf("\n\n\n  TO MENU >>1 \n");
    scanf("%d",&b);
    if(b==1)
    {
        system("cls");
        menu();
    }


}
void edit_student(struct student *edit,int id,char n)
{
    char name[20];
    int age;
    char phone[11];
    int b;
    if(n==1)
    {
        printf("ENTER NEW NAME :");
        string_scan(name,20);
        strcpy(edit[id].name,name);
        printf("\n                                   NAME EDITED\n");
        printf("\n\n                                    TO MENU >>1 \n");
        scanf("%d",&b);
        if(b==1)
        {
            system("cls");
            menu();
        }
    }
    if(n==2)
    {
        printf("ENTER NEW AGE :");
        scanf("%d",&age);
        edit[id].age=age;
        printf("\n                                   AGE EDITED\n");
        printf("\n\n                                    TO MENU >>1 \n");
        scanf("%d",&b);
        if(b==1)
        {
            system("cls");
            menu();
        }
    }
    if(n==3)
    {
        printf("ENTER NEW PHONE :");
        string_scan(phone,20);
        strcpy(edit[id].phone,phone);
        printf("\n                                   PHONE EDITED\n");
        printf("\n\n                                    TO MENU >>1 \n");
        scanf("%d",&b);
        if(b==1)
        {
            system("cls");
            menu();
        }
    }



}
void remove_student(struct student *remove,int id){
int i,b;
for(i=id;i<=nOfSchool;i++){

    remove[i]=remove[i+1];

}
  nOfSchool--;
printf("\n                                   STUDENT DELETED\n");
        printf("\n\n                                    TO MENU >>1 \n");
        scanf("%d",&b);
        if(b==1)
        {
            system("cls");
            menu();
        }
}
