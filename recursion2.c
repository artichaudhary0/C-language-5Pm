/*
    factorial : 
    5! => 5*4*3*2*1*0! => 120

    recursion : LIFO (LAST IN FIRST OUT) :
    
    type function_name (args) {
    // function statements
    // base condition (n<=1) return 1
    // end base condition
    
    // recursion case (recursive call)  5 + 4 + 3
        n*fun(n-1)
}
    
*/
#include <stdio.h>

int factorial(int n)
{
    
    if(n<=1)
    {
        return 1 ;
    }else{
        return n*factorial(n-1);
        
/*
n = 5 ; 
    if(n<=1) false
    else 5*fact(4)
        recursive call 
            fact(4)
                if(4<=1) false
                else 4*fact(3)
                    recursive call
                        if(3<=1) false
                        else 3*fact(2)
                            recursive call
                                if(2<=1) false
                                else 2*fact(1)
                                    recursive call
                                        if(1<=1) T
                                        fact(1) rt 1
        
        */
        
        
        
    }
    
    // int product = 1 ;
    // for(n ; n>=1 ; n-- )
    // {
    //     product = product*n ;
    // }
    // return product;
}

int main() {
    printf("%d",factorial(5));
    return 0;
}

/*
    
      
*/
#include <stdio.h>

int fibo(int n)
{
    if(n <= 1)
        return n ;
    else 
        return fibo(n-1) + fibo(n-2) ;
        }

int main() {
    
    for(int i = 5 ; i >= 0 ; i--)
    {
        printf("%d\t",fibo(i));
    }
    
    return 0;
}