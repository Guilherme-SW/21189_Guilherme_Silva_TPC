#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int mainMenu(int n);
void studentsMenu(int n);
void subjectsMenu(int n);
void selectMenu(int n);
void studentsSelect(int n);



char name[3][3][101] = {
    {{"21189"}, {"Guilherme"}, {"Silva"}},
    {{"21127"}, {"Tomas"}, {"Costa"}},
    {{"21178"},{"Pedro"},{"Duarte"}}};







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

void studentsMenu(int n){ //feito
    
    printf("\n\n**** Welcome to School Management System ****\n\n");
    printf("\n\t\t STUDENTS MENU");
    printf("\n\t=================================");
    printf("\n\t[1] Add a new Student");
    printf("\n\t[2] List all Students");
    printf("\n\t[3] Search of a Student");
    printf("\n\t[4] Edit a Student Information");
    printf("\n\t[5] Delete a Student");
    printf("\n\t[0] Exit");
    printf("\n\t=================================");
    printf("\n\tEnter your choice: ");
    
    scanf("%d",&n);
    studentsSelect(n);
}
void studentsSelect(int n){ 
    int i,j;
    
    char surname [3][31]= {{"Number: "},{"First name: "},{"Last name: "}};







 switch (n){
    case 1:
        printf("\n");
        for ( i =0 ; i <3; i++ ){
            for ( j=0 ; j <3; j++){
                printf("%s",surname[j]);
                 scanf("%s", name[i][j]);
            }
            printf("\n");
        }
       
        main();
        break;
    
    case 2:
        for ( i =0 ; i< 3; i++ ){
            for ( j=0 ; j <3 ; j++){
                
                printf ("%s\n",name[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    case 0:
        
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
