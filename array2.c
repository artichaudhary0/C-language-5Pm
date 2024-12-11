/*
Array : 

pre-defined : dataType arrayName[size] = {val.val...}
user-defined : dataType arrayName[size];

CRUD :
C : Create. 
R : Read / Retrive.
U : Update
D : Delete

S : searching

*/
#include <stdio.h>

int main() {
    // create : 
    int arrayName[5];
    
    // arrayName[0] = 15 ;
    // arrayName[1] = 25 ;
    // arrayName[2] = 35 ;
    // arrayName[3] = 45 ;
    // arrayName[4] = 55 ;
    int sum = 0 ;
    // create
    for( int i = 0 ; i < 5 ; i ++)
    {
        printf("arrayName[%d] : ",i);
        scanf("%d",&arrayName[i]);
    }
    
    for( int i = 0 ; i < 5 ; i ++)
    {
        sum = sum + arrayName[i]    ;
        // sum = 0 + 1 => 1
        // sum = 1 + 1 => 2
        // sum = 2 + 1 => 3
        // sum = 3 + 1 => 4
        // sum = 4 + 1 => 5
    }
    
    printf("Sum : %d",sum);
    
    
    // arrayName[3] = 100; // update
    
    // display
    // for( int i = 0 ; i < 5 ; i ++)
    // {
    //     if(arrayName[i] == 78)
    //     {
    //         printf("78 found at : %d\n",i);
    //         break ;
    //     }
    //     // printf("%d\n",arrayName[i]);
    // }
    
    
    
    
    
    // int arrayName[5] = {15,25,35,45,55}; 
    //                 // 0  1 2 3  4
    // // indexing 0 .... size-1 
    // // get 
    // for( int i = 0 ; i < 5 ; i ++)
    // {
    //     printf("%d\n",arrayName[i]);
    // }
    // printf("%d\n",arrayName[0]);
    // printf("%d\n",arrayName[1]);
    // printf("%d\n",arrayName[2]);
    // printf("%d\n",arrayName[3]);
    // printf("%d\n",arrayName[4]);
    
    
    
    
    
    
}