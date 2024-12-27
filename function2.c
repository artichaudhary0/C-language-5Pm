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
            
- TSRN (Take Something, Return Nothing) 
- TNRS (Take Nothing, Return Something) 
- TSRS (Take Something, Return Something) 

void      addition  (void){
        // working 
        int a , b ;
        printf("Enter values : ");
        scanf("%d%d",&a,&b);
        
        printf("Sum is : %d",a+b);
        // return value
        return ;
    }

*/
#include <stdio.h>
/*
Return type : if not present : void
        parameter : void
        Take nothing : parameter pass nai karoge 
        
            ReturnType functionName([parameter])
            {
               // working of function (requirement) 
                [return value]
            }
            
            
            parameter : (datatype variable name) // single value
                        (datatype varName , datatype varName,datatype varName ); // multi 

*/
// TSRN (Take Something, Return Nothing) 
void addition(int num1 , int num2 , float num3,char a) // num1 dynamic
{
    printf("Num3 : %f\n",num3);
    printf("Char : %c\n",a);
    // num1 : use
    printf("Sum of %d and %d is %d",num1,num2,num1+num2);
    
    return ;
}



int main() {
    
    
    int a , b ;
    printf("Enter values : ");
    scanf("%d%d",&a,&b);
    
    addition(a,b,5345.345, 'A') ; // argument
    
    

    return 0;
}


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
            
- TSRN (Take Something, Return Nothing) 
- TNRS (Take Nothing, Return Something) 
- TSRS (Take Something, Return Something) 


*/
#include <stdio.h>
/*
Return type : if not present : void
        parameter : void
        Take nothing : parameter pass nai karoge 
        
            ReturnType functionName([parameter])
            {
               // working of function (requirement) 
                [return value]
            }
            
            
            parameter : (datatype variable name) // single value
                        (datatype varName , datatype varName,datatype varName ); // multi 

*/
// TNRS : TAKE NOTHING RETURN SOMETHING (int char float)

float addition()
{
    int num1 , num2;
    printf("Enter the value ; ");
    scanf("%d%d",&num1,&num2);
    return 3.3 ;
}





int main() {


    float result = addition();

    printf("Sum is : %f",result);

    

    return 0;
}