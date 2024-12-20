/*
- NULL & ‘\0’ : 
    - empty value can be considered as null.
- String built-in functions

    

gets(str) => get string
puts(str) => put string

strupr(str) => string upper
strlwr(str) => string lower
strrev(str) => string reverse
strlen(str) => string length

strcpy(str1,str2)=> string copy
    str1 = str2

strcat(str1,str2)=> string concate(merge)
strcmp(str1,str2) => string comparision
    ans = str1-str2 (0,-1,1)
    =>    A    a   => -1
    =>    a    A   => 1
    =>    A    A   => 0
    
    pallindrom : nayan 
    
    
*/
#include <stdio.h>
#include<string.h>

int main() {
    
    char str1[20] , str2[20];
    
    printf("Enter first name : ");
    scanf("%s",&str1);
    
    strupr(str1);
    
    printf("%s",str1);

    return 0;
}