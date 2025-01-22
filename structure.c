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














#include <stdio.h>
#define MAX_STUDENT 15

struct StudentManagement{
    int grid ;
    char first_name[100] ;
    char last_name[100] ;
    char mobile[10] ;
    char course[100] ;
    float course_fees;
};

struct StudentManagement student[MAX_STUDENT];
int studentCount = 0 ;



void displayMenu();
void addStudents();
void updateStudent();
void viewStudent();
void exitFun();

int main() {
    
    int choice;
 
    
    while(1){
        displayMenu();
           printf("\nEntter your choice : ");
           scanf("%d",&choice);
           
           switch(choice)
           {
               case 1 : 
               addStudents();
                break ;
                case 2 : 
                updateStudent();
                break;
                case 3 : 
                viewStudent();
                break ;
                case 4 : 
                    printf("Exiting.....");
                    return 0 ;
                break ;
                default :
                printf("Invalid choice");
                break;
           }
        
    }


    return 0;
}

void displayMenu() {
    printf("\n--- Student Management Program ---\n");
    printf("1. Add Student\n");
    printf("2. Update Student\n");
    printf("3. View Students\n");
    printf("4. Exit\n");
    printf("----------------------------------\n");
}


void addStudents(){
    if(studentCount>=MAX_STUDENT)
    {
        printf("Student limit reached. can not add more students");
        return ;
    }
    struct StudentManagement newStudent;
    
        printf("Enter Grid : ");
        scanf("%d",&newStudent.grid);
        
        printf("Enter first name : ");
        scanf("%s",newStudent.first_name);
        
        printf("Enter last name : ");
        scanf("%s",newStudent.last_name);
        
        printf("Enter mobile : ");
        scanf("%s",newStudent.mobile);
        
        printf("Enter course : ");
        scanf("%s",newStudent.course);
        
        printf("Enter course_fees : ");
        scanf("%f",&newStudent.course_fees);
    
        student[studentCount] = newStudent;
        studentCount++;
        
        printf("\nStudent added successfully!!\n");
    
}


void updateStudent()
{
    int searchGrid , found = 0 ; // 0 false
    
    printf("Enter Grid of the student which you want to update : ");
    scanf("%d",&searchGrid);
    
    for(int i = 0 ; i < studentCount ; i++)
    {
        // st[0].grid => 
        if(student[i].grid == searchGrid)
        {
            found = 1 ; // true
            printf("Updating details for GRID %d  \n",searchGrid);
            
            printf("Enter new values : \n");
            
            printf("Enter Grid : ");
            scanf("%d",&student[i].grid);
            
            printf("Enter first name : ");
            scanf("%s",student[i].first_name);
            
            printf("Enter last name : ");
            scanf("%s",student[i].last_name);
            
            printf("Enter mobile : ");
            scanf("%s",student[i].mobile);
            
            printf("Enter course : ");
            scanf("%s",student[i].course);
            
            printf("Enter course_fees : ");
            scanf("%f",&student[i].course_fees);
        
            printf("\nStudent updated successfully!!\n");
        }
    }
    
    if(!found)
    {
        printf("No student found with the Grid %d",searchGrid);
    }
}


void viewStudent()
{
    if(studentCount==0)
    {
        printf("No student available");
        return ;
    }
    
    
    for(int i = 0 ; i <studentCount ; i++)
    {
        printf("\n\nStudent %d====\n",i+1);
        printf("GRID : %d",student[i].grid);
        printf("first_name : %s\n",student[i].first_name);
        printf("last_name : %s\n",student[i].last_name);
        printf("mobile : %s\n",student[i].mobile);
        printf("course : %s\n",student[i].course);
        printf("course_fees : %f\n",student[i].course_fees);
    }
}

void exitFun()
{
    return ;
}







