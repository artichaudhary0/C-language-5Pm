/*
loop : 

1.2.3...10
starting point (initilization) : 1
end point (upto 10): 10 
flow (increment) = +1 ++
statement : 
    printf(1,2,..10)
    
10 9 8 .... 1
starting 10 
end 1
flow (drecement) -1
statement 
    printf(10,9,8...1)
*/
#include <stdio.h>

int main() {
    int number ;
    int last ;
    int first ; // 342424 = 4
    /*
        342424
    
    */

    printf("Enter a number : ");
    scanf("%d",&number);
    // number = number/10 ;
    // printf("%d\n",number);
    // number = number/10 ;
    // printf("%d\n",number);
    // number = number/10 ;
    // printf("%d\n",number);
    // number = number/10 ;
    // printf("%d\n",number);
    // number = number/10 ;
    // printf("%d\n",number);
    // number = number/10 ;
    // printf("%d\n",number);
    
    last = number % 10 ;
    
    // printf("%d",last);
    
    while( number != 0 )
    {
        first = number ; 
        // printf("%d\n",first);
        number = number/10 ;
        
        /*
            Dry run : 
            number = 342424
            while (342424 != 0) true
            loop 1 : 
                first = 342424
                number = 342424 / 10 => 34242
            loop 2 :   true 
                first = 34242
                num = num/10 => 3424
            loop 3 : true 
                first = 3424
                num = num 342
            loop 4 : true
                first = 342
                num = 34
            loop 5 : true 
                first = 34
                num = 3
            loop 6 : true   
                first = 3
                num = 0
            loop 7 : false    
        */
        
    }
    
    printf("Sum of first and last digit is : %d\n",first+last);
    /*
    1 : 0 
    2 : 1 , 0
    3 : 
    4
    
    */

    
    // int i = 10 ;
    
    // while( i >= 1 )
    // {
    //     printf("%d\n",i);
    //     i--;
    // }
    
    
    // // step 1 : initilization 
    // int i = 1 ;
    
    // while( i<=10 )
    // {
    //     printf("%d\n",i);
    //     i = i + 1;
    // }    
    return 0;
}