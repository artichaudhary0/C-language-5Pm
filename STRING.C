/*
- Character in detail 
- ASCII value in detail 
- String : creation, display & insertion

ASCII : American standard code for information exchange
- 1945

- A - Z => 65 - 90 
- a - z => 97 - 122
- 0 - 9 => 48 - 57 
- 1-128

Character conversion :
 upper - lower => +32
 lower - upper => -32

Size of character : 1 byte

String : collection of character

*/
#include <stdio.h>

int main() {
    
    char array[100] ;
    
    
    printf("Enter you name : ");
    scanf("%s",&array);
    
    
    for(int i = 0 ; array[i] != '\0' ; i++)
    {
        if(array[i]>= 97 && array[i]<= 122)
        {
            array[i] = array[i] - (32);
        }else if(array[i]>= 65 && array[i]<= 90){
            array[i] = array[i] + (32);
        }
    }

    printf("%s",array);

    return 0;
}