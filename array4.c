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
    min and max value in array.
    int array[4] = {1,3,2,8};  // {1,2,4,5}
                // 0,1,2,3,4
                
    int max = array[0]; // 1           

    
    for(int i = 1 ; i <4 ; i++)
    {
        if(max < array[i]) 
        {
          max = array[i] ; 
        }
        
        max = array[0] => 1
        
        loop 1 : 
            i = 1 
                i<4 true
                if(1 < 3) true
                max = 3
                i++
            i = 2
                i <4 true
                if(max < array[2]) // 3 < 2 false
                i++
            i = 3 
                i < 4
                if(max < array[3]) // 3 < 8
                max = array[3] max = 8
                i++
            i = 4
                i<4 false
        
        
    }
    
    printf("Max %d",max);
                


*/

/*
    Delete all the occurance of a specific element :
    int array[8] = {1,3,2,3,4,3,5,3};  // {1,2,4,5}
                    // 0,1,2,3,4
    
    int array2[] = {};            
                
    int deletedItem = 3;
    
    int newSize = 0 ;
    
    for(int i = 0 ; i <8 ; i++)
    {
        if(array[i] != deletedItem)
        {
           array2[newSize] = array[i] ;
           newSize++ ;
        }
    }
                

    for(int i = 0 ; i < newSize ; i++)
    {
        printf("%d\n",array2[i]);
    }
    


 */


/*
    add a specific value in the specific position in array.
    int array[5] = {1,2,3 ,4,5}; 
                    // 0,1,2,3,4
                
                
    int intersertedIndex = 2 ;
    for(int i = 4 ; i >= intersertedIndex ; i--)
    {
        array[i+1] = array[i];
        // printf("array[%d] : %d\n",i+1,array[i] );
    }

        i = 4 : 
            4 >=2 true 
            array[5] = array[4] => array[5] = 5
            i-- => 3
        i = 3
            array[4] = array[3] = 4
            i--
        i = 2 
            array[3] = array[2] = 3
            i--
        i = 1 
            false
    
    
    // array[2] = 6 
    array[intersertedIndex] = 6;
    printf("%d\n",array[0]);
    printf("%d\n",array[1]);
    printf("%d\n",array[2]);
    printf("%d\n",array[3]);
    printf("%d\n",array[4]);
    printf("%d\n",array[5]);
    
    for(int j = 0 ; j < 6 ; j++)
    {
        printf("%d",array[j]);
    }

    
    // for(int i = 0 ; i < 6 ; i++)
    // {
       
    //     printf(" %d\n",array[i] );
    // }
    // for(int i = 0 ; i < 6 ; i++)
    // {
    //     printf("array[%d] : %d \n" ,i, array[i]);
    // }

 */



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