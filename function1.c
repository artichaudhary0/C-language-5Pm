/*
    what is function ? 
        - re-usable block of code.
        - it can be repeated by its name.
        
        fun(){} => function
        
        (){} => call back, anonymous function.
        
        
    Signatures(Requirement) of function  : 
       - Return type
       - functionName
       - parameters
       
       
    Type of function : 
    1 : Built-In/Pre-defined : getch(), printf(),scanf(),clrscr(),strlen()...
    
        TNRN : TAKE NOTHING RETURN NOTHING : CLRSCR()
        TSRN : TAKE SOMETHING RETURN NOTHING : PRINTF("STRING")
        TNRS : TAKE NOTHING RETURN SOMETHING : GETCH()
        TSRS : TAKE SOMETHING RETURN SOMETHING : INT LENGTH = STRLEN(STR)

    2 : userDefine :
        TNRN :
        TSRN :
        TNRS :
        TSRS :
        
        SYNTAX :
        
        Return type : if not present : void
        parameter : void
        Take nothing : parameter pass nai karoge 
        
            ReturnType functionName([parameter])
            {
               // working of function (requirement) 
                [return value]
            }
*/
#include <stdio.h>

// TNRN : TAKE NOTHING RETURN NOTHING


// RETURNTYPE FUNTIONAME PARAMETER
    void      addition  (void){
        // working 
        int a , b ;
        printf("Enter values : ");
        scanf("%d%d",&a,&b);
        
        printf("Sum is : %d",a+b);
        // return value
        return ;
    }
    
    
// RETURNTYPE FUNTIONAME PARAMETER
    void      cube  (void){
        // working 
        int a ;
        printf("Enter value : ");
        scanf("%d",&a);
        
        printf("Cube is : %d",a*a*a);
        // return value
        return ;
    }
    
    
// TNRN : TAKE NOTHING RETURN NOTHING  

void divisibleby3and5(void){
    
    int num ;
    printf("Enter number : ");
    scanf("%d",&num);
    
    if(num%3==0 && num%5==0)
    {
        printf("yes");
    }else{
        printf("no");
    }
    
    
}





int main() {
    divisibleby3and5();
    
    return 0;
}