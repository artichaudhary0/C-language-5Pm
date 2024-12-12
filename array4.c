/*
CRUD

*/
#include <stdio.h>

int main() {
    
    // Update a specific value in array.
    int array[] = {1,2,3,4,5}; 
                //  0,1,2,3,4
                
    int length  = sizeof(array)/sizeof(array[0]);
    printf("%d",length);
                
    array[2] = 0 ;   
    
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d ",array[i]);
    }
    
    int index ;
    printf("\nEnter index which you want to remove value from : ");
    scanf("%d",&index);
    
    for(int i = index ; i < 5 ; i++)
    {
        array[i] = array[i+1];
    }
    
    
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d ",array[i]);
    }
    
    
    
    

    return 0;
}

/*
  // add a specific value in the end array.
    int array[] = {1,2,3,4,5}; 
                //  0,1,2,3,4
                
    int length  = sizeof(array)/sizeof(array[0]);
                
    array[length] = 6 ;   
    
    for(int i = 0 ; i < length + 1 ; i++)
    {
        printf("%d ",array[i]);
    }
    

 */


 /*
 
 // search a specific value in the end array.
    int array[] = {1,2,3,4,5}; 
                //  0,1,2,3,4
                
    int search = 6 ;            
                
    int length  = sizeof(array)/sizeof(array[0]);
    int found = 0 ;
                
    array[length] = 6 ;   
    
    for(int i = 0 ; i < length + 1 ; i++)
    {
        if(array[i] == search)
        {
            found = 1 ;
            break ;
        }
    }
    
    if(found == 1)
    {
        printf("Element found!!!");
    }else{
        printf("Element not found!!!");
    }
 
  */