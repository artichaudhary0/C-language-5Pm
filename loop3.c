#include <stdio.h>

int main() {
    
    for(int i = 1 ; i <=10 ; i++)
    {
        printf("%d\n",i) ;
        if(i == 2) continue ;
        printf("hello%d\n",i);
        /*
            step 1 : i = 1 
            step 2 : 1 <= 10 true
            step 3 : 
            p(1)
            if(1==2) false
                
            step 4 i++ => i = 2
            
            step 2 : 2 <= 10 true
            step 3 : 
            p(2)
            2==2 true continue(skip the current iteration)
        
        */
    }


    return 0;
}