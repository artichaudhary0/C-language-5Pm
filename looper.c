/*

*/
#include <stdio.h>

int main() {
    
    
    // first digit 
    int num ; 
    printf("Enter the number : ");
    scanf("%d",&num);
    int first;
    int count = 0 ;
    int last = num%10;
    
    while(num != 0)
    {
        count ++;
        first = num;
        num = num/10;
    }
    
    printf("Total digit : %d, first digit : %d, last digit : %d",count,first,last);
    
    
    
    
    // 5! => 5*4*3*2*1 => 0! = 1
    // start = 5 , end = 1 , decrement 
    
    // int product = 5;
    // for(int i = 97 ; i <= 122 ; i = i+4)
    // {
    //     printf("%c\n",i);
    // }
    
    // for(char i = 'a' ; i <= 'z' ; i = i+4)
    // {
    //     printf("%c\n",i);
    // }
    
    
    // int sum = 0 ; 
    // for(int i = 1 ; i <= 8 ; i++)
    // {
    //     sum = sum + i ;
    //     /*
    //         sum = 0 + 1 => 1
    //         sum => 1 + 2 => 3
    //     */
    // }
    
    // printf("%d",sum);
    
    // int first = 0 , second = 1 , nextTerm , n;
    // printf("Enter the number : ");
    // scanf("%d",&n);
    // printf("%d %d ",first,second);
    // for(int i = 1 ; i <= n - 2 ; i++)
    // {
    //     nextTerm = first + second ; // temp 
    //     printf("%d ",nextTerm);
    //     first = second ;
    //     second = nextTerm ;
    // }
    return 0;
}