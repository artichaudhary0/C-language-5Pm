/*
loop : 
It repeat a certain block of code until some condition become false.

requirement : 
1 : initilization. (starting point)
2 : condition. (stoping condition)
3 : flow/increment/decrement. (loop work)

Types of loop : 
1 : Entry control : while() , for()
2 : Exit Control : do-while()


while : 
Syntax : 

initilization 

while(condition)
{
    // Statements
    flow
}

*/
#include <stdio.h>

int main() {
    int i = 1; // initilization
    int n ; 
    printf("Enter n value : ");
    scanf("%d",&n);
    
    while( i <= n ){ // condition
        if(i%2 != 0)
        {
            printf("%d\n",i); // statements
        }
        i++; // flo             
    }
    
    
    // printf("%d\n",i);
    // i++;
    // printf("%d\n",i);
    // i++;
    // printf("%d\n",i);
    // i++;
    // printf("%d\n",i);
    // i++;
    // printf("%d\n",i);
    // i++;
    // printf("%d\n",i);
    // i++;
    // printf("%d\n",i);
    // i++;
    // printf("%d\n",i);
    // i++;
    // printf("%d\n",i);
    // i++;
    // printf("%d\n",i);

    return 0;
}