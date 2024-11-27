#include <stdio.h>
/*
if(cond)
{
    // stat
}else if(cond)
{
    // stat
}else if(cond)
{
    // stat
}
else if(cond)
{
    // stat
}else{
    // stat
}

switch : 

syntax :

switch(integerValue/choice){
    case 1 : 
        break ;
    case 2 :
        break ;
    case 3 : 
        break ;
        .
        .
        .
    default :
        break ;
}
*/

int main() {
    
    int choice; // user defined
    
    
    printf("Press 1 for Male \n");
    printf("Press 2 for Female \n");
    printf("Press 3 for Trans \n\n");
    
    printf("Enter your gender : ");
    scanf("%d",&choice);
    
    // switch keyword 
    switch(choice)
    {
        case 1 :
            printf("you have selected Male");
            break ;
        case 2 :
            printf("you have selected Female"); 
            break ;
        case 3 :
            printf("you have selected Trans");
            break ;
        default :
            printf("Invalid input");
        
    }
    
    // if(choice == 1)
    // {
    //     printf("you have selected Male");
    // }else if(choice == 2)
    // {
    //     printf("you have selected Female");
    // }else if(choice == 3)
    // {
    //     printf("you have selected Trans");
    // }else{
    //     printf("you have selected wronge option");
    // }
    return 0;
}