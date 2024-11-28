// Switch case
/*


*/
#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter your choice : ");
    scanf("%c",&ch);
    
    // 97 - 128
    // 65 
    int value ;
    
    if( ch == 'a' || ch == 'A' )
    {
        value = 1 ; 
    }

    switch(value)
    {
        case  1:
            printf("a/A");
            break ;
        
        default :
            printf("Error");
            break ;
    }
    
    
    

    return 0;
}