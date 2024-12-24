/*

*/
#include <stdio.h>
#include<string.h>

int main() {
    char str[100]; // size
    int i,frequency[256] = {0};
    
    printf("Enter the String : "); // development
    scanf("%s",str);
    
    /* 
     97 98 99 100
     a  b  c  d
    str[11] => {d,e,v,e,l,o,p,m,e,n,t}
                0,1,2,3,4,5,6,7,8,9,10
                100
    */
    
    for(int i = 0 ; i <strlen(str);i++) // strlen 11
    {
        if(str[i] != '\0') // str[i] == '\0'=> false =>!false = true
        {
            frequency[str[i]]++;
            /*
            
                str last char = '/0'
                loop 1 : 
                    step 1 : i = 0
                    step2 :
                        str[i] => str[0] => d
                        frequency['d']++;
                        frequency[100] ++ =. f[100] = 1
                    step 3 : i++ => 1
                
                loop 2 : 
                    step 2 : 
                        str[1] => 'e'
                        frequency[101]++; f[101] = 1
                    step 3 : i++ => 2
                    
                loop 3 :
                    step 2 :
                        str[2] => str[2] => 'v' 119
                        f[119] =. 1
                    step 3 : 
                        i++ =. 3
                
                loop 4 : 
                    step 2 :
                        str[3] =. 'e'
                        f[101] => 2
                    step 3 : 
                        i++ = 4
                
                loop 5 : 
                    step 2 : 
                        str[4] =. 'l'
                        fre[ACII(l)] => +1
                    
                    
                
                
            */
        }
    }
    
    
    for(int i = 0 ; i <256 ; i++)
    {
        if(frequency[i] != 0) 
        {
            printf("%c=>%d\n",i,frequency[i]);
        }
    }
    
    

    return 0;
}