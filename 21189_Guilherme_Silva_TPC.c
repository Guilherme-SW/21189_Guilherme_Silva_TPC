#include <stdio.h>
#include <stdlib.h>

int mainMenu(int n);
void studentsMenu(int n);
void subjectsMenu(int n);
void selectMenu(int n);

int main(){
    int n=0;
    
   n = mainMenu(n);
    selectMenu(n);
    
    return 0;
}

int mainMenu (int n){  //feito 


        printf("\n\n**** Welcome to School Management System ****\n\n");
        printf("\n\t\tMAIN MENU");
        printf("\n\t======================");
        printf("\n\t[1] Student Menu");
        printf("\n\t[2] Subjects Menu");
        printf("\n\t[0] Exit");
        printf("\n\t======================");
        printf("\n\tEnter your choice:");

        scanf("%d",&n);
   return n;
}

void studentsMenu(int n){
    
    printf("\n\n**** Welcome to School Management System ****\n\n");
    printf("\n\t\t STUDENTS MENU");
    printf("\n\t=================================");
    printf("\n\t[1] Add anew Student");
    printf("\n\t[2] List all Students");
    printf("\n\t[3] Search of aStudent");
    printf("\n\t[4] Edit a Student Information");
    printf("\n\t[5] Delete a Student");
    printf("\n\t[0] Exit");
    printf("\n\t=================================");
    printf("\n\tEnter your choice:");
    
    scanf("%d",&n);
    printf("%d",n);
    
}

void selectMenu(int n){ 
    
 switch (n){
    case 1:
        studentsMenu(0);
        break;
    case 2:
        subjectsMenu(0);
        break;
    case 0:
        exit;
        break;

    default:
    printf("\n\nInvalid character");
    main();
 }    
}






void subjectsMenu(int n){

    printf("\n\n**** Welcome to School Management System ****\n\n");
    printf("\n\t\tSUBJECTS MENU");
    printf("\n\t=================================");
    printf("\n\t[1] Add a new Subject");
    printf("\n\t[2] List all Subjects");
    printf("\n\t[3] Edit a Subjects information");
    printf("\n\t[4] Delete a Subject");
    printf("\n\t[0] Exit");
    printf("\n\t=================================");
    printf("\n\tEnter your choice:");

}


void selectMenu(int n){  // feito
    
 switch (n){
    case 1:
        studentsMenu(0);
        break;
    case 2:
        subjectsMenu(0);
        break;
    case 0:
        exit;
        break;

    default:
    printf("\n\nInvalid character");
    main();
 }    
}