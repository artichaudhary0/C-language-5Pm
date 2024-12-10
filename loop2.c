/*
Type of loop :
1 : entry control : while, for
2 : Exit control : do - while


- do while loop


loop :
initilization
condition
flow(increment/ dec)


while 
init
while(cond)
{
    // stat
    // flow
}

do-while
Syntax : 
    int 
    do{
        // state
        // flow
    }while(cond) ;
    
    
for: 
for(init ; condition ; flow)
{
    // statements
}

*/
#include <stdio.h>

int main() {
    // 1 ... 10
    int starting = 1 ;
    int ending = 10 ;
    
    printf("\n==========While========\n");
    while( starting <= ending ) // 11 <= 10 false
    {
        /*
            step 1 : init one time
            step 2 : condition
            step 3 : statement
            step 4 : flow(increment)
            2 3 4 2 3 4 2 3 4.... 2false
        */
        printf("%d\n",starting) ;
        starting++;
    }
    
    // 1 ... 10
    printf("\n==========do-While========\n");
    int start = 1 ;
    int end = 10 ;
    
    do{
        /*
            step 1 : init one time
            step 2 : statement
            step 3 : flow
            step 4 : condition 
            2 3 4 .. 2 3 4 .. 2 3 4 .... 4 false
        */
        printf("%d\n",start) ;
        start++;
    }while(start <= end) ; // false
    
    
    printf("\n==========for========\n");
    int i = 1 ;
    for( ;  ; )
    {
        if(i <= 10 ){
         printf("%d\n",i) ;
         i++;// 11
        }else{
            break ; 
        }
    }
    return 0;
}