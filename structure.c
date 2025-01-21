/*
user defined data type : 

Structure : 




- Union 
- Enumeration
*/
#include <stdio.h>

// user defined data type
struct Arti5PM{
    int grid ;
    char name[100] ;
    char course[100] ;
    float fees ;
};


void displayMenu() {
    printf("\n--- Student Management Program ---\n");
    printf("1. Add Student\n");
    printf("2. Update Student\n");
    printf("3. View Students\n");
    printf("4. Exit\n");
    printf("----------------------------------\n");
}



int main() {
    
    displayMenu();
    
    struct Arti5PM    student[5];
    
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("\n======Student %d ============\n",i+1);
 
        printf("Enter your grid : ");
        scanf("%d",&student[i].grid);
        
        printf("Enter the name : ");
        scanf("%s",student[i].name);
        
        printf("Enter the course : ");
        scanf("%s",student[i].course);
        
        printf("Enter the fees : ");
        scanf("%f",&student[i].fees);
        
        
    }
    return 0;
}