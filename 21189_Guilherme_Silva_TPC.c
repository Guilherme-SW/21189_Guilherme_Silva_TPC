#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("\n\n**** Welcome to School Management System ****\n\n");
    printf("\n\t\tMAIN MENU");
    printf("\n\t======================");
    printf("\n\t[1] Student Menu");
    printf("\n\t[2] Subjects Menu");
    printf("\n\t[0] Exit");
    printf("\n\t======================");
    printf("\n\tEnter your choice:");

    scanf("%d",&n);
    
    
    if (n==1){
        printf("\n\n**** Welcome to School Management System ****\n\n");
        printf("\n\t\tTUDENTS MENU");
        printf("\n\t=================================");
        printf("\n\t[1] Add anew Student");
        printf("\n\t[2] List all Students");
        printf("\n\t[3] Search of aStudent");
        printf("\n\t[4] Edit a Student Information");
        printf("\n\t[5] Delete a Student");
        printf("\n\t[0] Exit");
        printf("\n\t=================================");
        printf("\n\tEnter your choice:");
    }
    else if (n==2){
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
    else if (n==0){
        exit(0);
    }
    else{
        printf("Invalid character");
    }
    
    
    
    
    
   

    
    
    
    
    


    return 0;
}