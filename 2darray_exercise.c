/*
int array[size1][size2] ;

total no. of elemenet : size1*size2

*/

// largest element in matrix
#include <stdio.h>

int main() {
    int size1;
    int size2 ;
    
    printf("Enter row and column : ");
    scanf("%d%d",&size1,&size2);
    
    int array[size1][size2] ;
    
    printf("\n========Enter values in 2D - array (Matrix)===========\n");
    
    // row
    for(int i = 0 ; i < size1 ; i++)
    {
        // columns
        for(int j = 0 ; j < size2 ; j++)
        {
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    
    
    int largest = array[0][0];
    // row
    for(int i = 0 ; i < size1 ; i++)
    {
        // columns
        for(int j = 0 ; j < size2 ; j++)
        {
           if(largest < array[i][j])
           {
             largest = array[i][j];
           }
        }
    }
    
    
    printf("Largest element : %d",largest);
    
    
    

    return 0;
}


// transpose

/*


#include <stdio.h>

int main() {
    int size1; // 3
    int size2 ; // 2
    
    printf("Enter row and column : ");
    scanf("%d%d",&size1,&size2);
    
    int array[size1][size2] ;
    
    printf("\n========Enter values in 2D - array (Matrix)===========\n");
    
    // row
    for(int i = 0 ; i < size1 ; i++) // 3
    {
        // columns
        for(int j = 0 ; j < size2 ; j++) // 2
        {
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n\n");
    
    // row
    for(int i = 0 ; i < size2 ; i++) // 2
    {
        // columns
        for(int j = 0 ; j < size1 ; j++) // 3
        {
           printf("array[%d][%d] : %d\n",i,j,array[j][i]);
        }
    }
    return 0;
}
 */

 /*

#include <stdio.h>

int main() {
    int size1; // 3
    int size2 ; // 2
    
    printf("Enter row and column : ");
    scanf("%d%d",&size1,&size2);
    
    int array[size1][size2] ;
    
    printf("\n========Enter values in 2D - array (Matrix)===========\n");
    
    // row
    for(int i = 0 ; i < size1 ; i++) // 3
    {
        // columns
        for(int j = 0 ; j < size2 ; j++) // 2
        {
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n\n");
    
    // row
    int row ;
    printf("Enter row : ");
    scanf("%d",&row);
    int sumRow = 0 ;
    for(int i = 0 ; i < size2 ; i++) // 2
    {
           sumRow = sumRow + array[row][i];
    }
    
    printf("\n\nRow : %d\n\n",sumRow);
    
    
    int column ;
    printf("Enter row : ");
    scanf("%d",&column);
    int sumColumn= 0 ;
    for(int i = 0 ; i < size1 ; i++) // 2
    {
           sumColumn = sumColumn + array[i][column];
    }
    
    printf("\n\nColumn : %d",sumColumn);
    
    
    
    

    return 0;
}

 
  */

  /*

  avg
  #include <stdio.h>

int main() {
    int size1; // 3
    int size2 ; // 2
    
    
    printf("Enter row and column : ");
    scanf("%d%d",&size1,&size2);
    float total_size = size1 * size2; 
    int array[size1][size2] ;
    
    int sum = 0 ;
    
    printf("\n========Enter values in 2D - array (Matrix)===========\n");
    
    // row
    for(int i = 0 ; i < size1 ; i++) // 3
    {
        // columns
        for(int j = 0 ; j < size2 ; j++) // 2
        {
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
            
            sum = sum + array[i][j];
        }
    }
    
    printf("Sum = %f",sum/total_size);

    
    
    
    

    return 0;
}
  
  
   */
   /*

   DIAGONAL ELEMENTS
   #include <stdio.h>

int main() {
    int size1; // 3
    int size2 ; // 2
    
    
    printf("Enter row and column : ");
    scanf("%d%d",&size1,&size2);
    float total_size = size1 * size2; 
    int array[size1][size2] ;
    
    int sum = 0 ;
    
    printf("\n========Enter values in 2D - array (Matrix)===========\n");
    
    // row
    for(int i = 0 ; i < size1 ; i++) // 3
    {
        // columns
        for(int j = 0 ; j < size2 ; j++) // 2
        {
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
            
            if(i==j)
            {
                sum = sum + array[i][j];
            }
        }
    }
    
    printf("Sum = %d",sum);
    
    

    return 0;
}
   
   
   
    */