// Switch case
/*
case 1 : English
case 2 : hindi
case 3 : gujarati

*/
#include <stdio.h>

int main() {
    int choice ;
    
    repeateLanguageOption : // : colon
    printf("Press 1 for English\nPress 2 for Hindi\nPress 3 for Gujarati\nPress 4 for Exit\n\n");
    
    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    
    switch(choice)
    {
        case 1 :
            repeateRechargeOption :
            printf("\n\nPress 1 for Internet\nPress 2 for Top-up\nPress 3 for Special\n\n");
            
            printf("Enter your choice : ");
            scanf("%d",&choice);
            
            
            
            switch(choice)
            {
                case 1 : 
                    printf("You have successfully done Internet recharge");
                    break;
                case 2 : 
                    printf("You have successfully done Top-up recharge");
                    break ;
                case 3 : 
                    printf("You have successfully done Special recharge");
                    break ;
                default :
                goto repeateRechargeOption ;
                    break;
            }
            
            
            break ;
        case 2 : 
            printf("\n\nInternet recharge ke liye 1 dabaye\nTop-up recharge ke liye 2 dabaye\nSpecial recharge ke liye 3 dabaye\n\n");
            
            switch(choice)
            {
                case 1 : 
                    break;
                    
                case 2 : 
                    break ;
                    
                case 3 : 
                
                    break ;
                default :
                
                    printf("Invalid case ");
                    break;
            }
            
            break ;
        case 3 :
             printf("\n\nInternet recharge mate 1 dabavo\nTop-up recharge mate 2 dabavo\nSpecial recharge mate 3 dabavo\n\n");
             
             switch(choice)
            {
                case 1 : 
                    break;
                    
                case 2 : 
                    break ;
                    
                case 3 : 
                
                    break ;
                default :
                    printf("Invalid case ");
                    break;
            }
            break ;
            
        case 4 : 
            break ;
        default :
            goto repeateLanguageOption ;
            // printf("Invalid option");
            break;
    }

    
    

    return 0;
}