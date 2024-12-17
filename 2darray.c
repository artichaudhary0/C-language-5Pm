/*
    2D array : 
    
    syntax : 
        
        dynamic :
        datatype arrayName[row_size][column_size] ;
        
        static / predefined 
        datatype arrayName[row_size][column_size] = {{row value},{column value}};
*/
#include <stdio.h>

int main() {
    
    // int array[3][3] = {{10,213,223},{210,231,32}};
    //                 //  r0,r1,r2 , c0,c1,c2   
                    
    // printf("%d",array[1][0]);
    /*
        0,0 => 10
        0,1 => 20
        0,2 => 30
        1,0 => 40
        1,1 => 50
        1,2 => 60
        2,0 => 70
        2,1 => 80
        2,2 => 90
        
    */
    
    int array[3][3] ; 
    // outter loop
    for(int i = 0 ; i <3 ;i++)
    {
        // inner loop
        for(int j = 0 ; j <3 ; j++)
        {
            printf("array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
            /*
                outter loop 1
                step 1 : i = 0
                step 2 : i < 3 => 0 < 3 true
                step 3 : 
                    inner loop 1
                        step 1 : j = 0 
                        step 2 : j < 3 true
                        step 3 : array[0][0] = 10
                        step 4 : j ++ => 1
                        
                    inner loop 2 : 
                        step 2 : j = 1 < 3 true
                        step 3 : array[0][1] = 20 
                        step 4 : j++
                        
                    inner loop 3 : 
                        step 2 : j = 2 <3 true
                        step 3 : array[0][2] = 30 
                        step 4 : j++ = 3
                        
                    inner loop 4 :
                        step 2 : j = 3 < 3 false
                        exit
                step 4 : i++ => 1
                  
                outer loop    2
                step 2 : i < 3 => 1 < 3 true
                step 3 : 
                    inner loop 1
                        step 1 : j = 0 
                        step 2 : j < 3 true
                        step 3 : array[1][0] = 40
                        step 4 : j ++ => 1
                        
                    inner loop 2 : 
                        step 2 : j = 1 < 3 true
                        step 3 : array[1][1] = 50 
                        step 4 : j++
                        
                    inner loop 3 : 
                        step 2 : j = 2 <3 true
                        step 3 : array[1][2] = 60 
                        step 4 : j++ = 3
                        
                    inner loop 4 :
                        step 2 : j = 3 < 3 false
                        exit
                
                outer loop  3  
                step 4 : i ++ => 2 
                step 2 : i < 3 => 2 < 3 true
                step 3 : 
                    inner loop 1
                        step 1 : j = 0 
                        step 2 : j < 3 true
                        step 3 : array[2][0] = 70
                        step 4 : j ++ => 1
                        
                    inner loop 2 : 
                        step 2 : j = 1 < 3 true
                        step 3 : array[2][1] = 80 
                        step 4 : j++
                        
                    inner loop 3 : 
                        step 2 : j = 2 <3 true
                        step 3 : array[2][2] = 90 
                        step 4 : j++ = 3
                        
                    inner loop 4 :
                        step 2 : j = 3 < 3 false
                        exit
                step 4 : i++ => 3
                
                outer loop 4 :
                    3 < 3 FALSE
            */
        }
    }

    return 0;
}