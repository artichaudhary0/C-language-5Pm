/*
TSRS (Take Something, Return Something) :


        Return type : if not present : void
        parameter : void
        Take nothing : parameter pass nai karoge 
        
            ReturnType functionName([parameter])
            {
               // working of function (requirement) 
                [return value]
            }
*/
#include <stdio.h>

// addition 

int addition(int num1 , int num2){
    return num1+num2 ;
}


float addition2(float num1 , float num2){
    return num1+num2 ;
}

char addition3(char num1 , char num2){
    return num1+num2 ; 
}



int main() {
    
    int result = addition(12,8);
    printf("%d\n",result);
    
    float result2 = addition2(12.345,8.25435);
    printf("%f\n",result2);
    
    char result3 = addition3('A','b');
    printf("%c",result3); // 'Ab'
    
    
    
    return 0;
}










/*

*/
#include <stdio.h>

// addition 
// proto - type :
int addition(int,int);
float addition2(float,float) ;
char addition3(char,char);


int main() {
    
    int result = addition(12,8);
    printf("%d\n",result);
    
    float result2 = addition2(12.345,8.25435);
    printf("%f\n",result2);
    
    char result3 = addition3('A','b');
    printf("%c",result3); // 'Ab'
    
    
    
    return 0;
}


int addition(int num1 , int num2){
    return num1+num2 ;
}

// prototype 
// int addition(int,int);


float addition2(float num1 , float num2){
    return num1+num2 ;
} // float addition2(float,float)

char addition3(char num1 , char num2){
    return num1+num2 ; 
} // char addition3(char,char);


/*

*/
#include <stdio.h>

int passArray(int arr[], int size);
void passString(char str[]);


int main() {
    
    int arr[] = {6,4,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]) ; 
    
    char str[] = "Hello, World";
    
    // passString(str);
    
   int sum =  passArray(arr, size);
   
   printf("Sum is : %d",sum);
    return 0;
}

void passString(char str[])
{
    printf("String passed :  %s",str);
}

int passArray(int arr[], int size){
    int sum = 0 ;
    printf("Array passed : \n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("array[%d] : %d \n",i,arr[i]);
        sum = sum + arr[i];
    }
    printf("\n");
    
    return sum ;
}

/*

*/
#include <stdio.h>

int passString(char str[]);


int main() {

    
    char str[] = "Development";

    
   int count =  passString(str);
   
   printf("\nCharacter count is : %d",count);
   return 0;
}

int passString(char str[])
{
    int count = 0 ;
    
    printf("String passed :  %s",str);
    
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        count++;
    }
    return count ;
}

