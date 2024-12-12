/*
- 1D Array exercises
*/
#include <stdio.h>

int main() {
    
    
    int size ;
    printf("Enter the size : ");
    scanf("%d",&size);
    
    int array1[size]; 
    int array2[size]; 
    int array3[size]; 
    
    printf("Enter element of A\n"); // length 
    
    for(int i = 0 ; i < size ; i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&array1[i]);
    }
    
    printf("\nEnter element of B\n"); // length 
    
    for(int i = 0 ; i < size ; i++)
    {
        printf("B[%d] : ",i);
        scanf("%d",&array2[i]);
    }

        // A[0] + B[0] , A[1] + B[1]
    printf("\nArray C is : ");
     for(int i = 0 ; i < size ; i++)
    {
        // 0 = A[0]+B[0]
       array3[i] = array1[i] + array2[i] ;
       printf("%d ",array3[i]);
    }
    
    

    return 0;
}