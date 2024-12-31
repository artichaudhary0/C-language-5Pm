/*

*/
#include <stdio.h>

void prime_factors(int n){
    
    // outer loop
    for(int i = 2 ; i <= n ; i++) // 42
    {
        // inner loop 
        while(n % i == 0 )
        {
            printf("%d\n",i);
            n = n / i ;
        }
        
        /*
            outer loop 1 : 
                step 1 :  i = 2 
                step 2 : i <= n true , 2 <= 24 true
                step 3 : 
                    inner loop 1
                        step 2 : n % i == 0 24 % 2 == 0 true
                        step 3 : P(2)
                        step 4 : n = n / i => 24 / 2 => 12
                    inner loop 2
                        step 2 : n % i == 0 12 % 2 == 0 true
                        step 3 : P(2)
                        step 4 : n = n / i => 12 / 2 => 6    
                    inner loop 3
                        step 2 : n % i == 0 6 % 2 == 0 true
                        step 3 : P(2)
                        step 4 : n = n / i => 6/2=> 3
                    inner loop 4
                        step 2 : n % i == 0 3 % 2 == 0 false
                        step 3 : exit
  
                step 4 : i++ => 3
                
            outer loop 2 : 
                step 2 : i <= n true , 3 <= 3 true
                step 3 : 
                    inner loop 1
                        step 2 : n % i == 0 3 % 3 == 0 true
                        step 3 : P(3)
                        step 4 : n = n / i => 3 / 3 => 1
                    inner loop 2
                        step 2 : n % i == 0 1 % 3 == 0 false
                        step 3 : exit
                step 4 : i++ => 4
           outer loop 3 : 
                step 2 : i <= n true , 4 <= 1 false
                step 3 : exit   
        */
        
        // if(n%i == 0) // 84 %  84
        // {
        //     printf("%d\n",i);
        // }
    }
   
}

int main() {
    prime_factors(24);
    return 0;
}


/*

*/
#include <stdio.h>
#include <string.h>

void numbers_to_words(int n,char* result){
    
    // 0 - 9
    char *words[] = {"Zero","One" , "Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven" ,"Tweleve","Thirteen","fourteen","fifteen","Sixteen","Seventeen","Eighteen","Nineteen",};
    
    char *tens[] = {"","" , "Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    
    if(n == 0)
    {
        strcat(result, "Zero") ;
        printf("Zero\n");
        return ;
    }
    
    if(n < 20)
    {
        strcat(result, words[n]) ;
    }else if(n < 100)
    {
        strcat(result, tens[n/10]) ;
        if(n%10)
        {
            strcat(result, " ") ;
            
            numbers_to_words(n%10,result);
        }
    }else if(n < 1000)
    {
         strcat(result, words[n/100]) ;
         strcat(result, " Hundred") ;
         if(n%1000)
         {
             strcat(result, " ") ;
             numbers_to_words(n%100,result);
         }
    }

}

void wordsss(int n)
{
    char result[100] = "";
    numbers_to_words(n,result);
    printf("%s",result);
}


int main() {
    wordsss(199);
    return 0;
}