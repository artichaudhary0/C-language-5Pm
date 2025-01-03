
/*
    Recursion : 
        - Function call itself untill some condition is full-filled.
*/
#include <stdio.h>

void loop(int start , int end)
{
    printf("%d\n",start);
    start++ ; 
    
    if(start<=end)
    {
        loop(start,end);
    }
    
    // for(start ; start<=end ; start++)
    // {
    //     printf("%d\n",start);
    // } 
}


int main() {
    
    loop(1,20);
    
    
    return 0;
}