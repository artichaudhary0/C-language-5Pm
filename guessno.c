/*
No. gusseing game :  
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game()
{
    int random_number , guess_number, no_of_guess = 0;
    
    
    // generate random no. 1 - 100
    
    random_number = rand() % 100 + 1; // 0 - 1 random generate 0 % 100 => 0 , 0 . 0000.9999999
    printf("\n🎮 Welcome to the world of Gusseing number! 🎮\n");
    printf("I have picked number between 1 - 100.\nLets see in how many attempts you take to guess it!!");
    
    
    do{
        printf("\n\n\nEnter the number : ");
        scanf("%d",&guess_number);
        no_of_guess++;
        
        if(guess_number > random_number)
        {
            printf("💡 Hint : Guess a smaller no. ");
        }else if(guess_number < random_number)
        {
            printf("💡 Hint : Guess a larger no. ");
        }else{
            printf("Congratulations You have guessed the number in %d  attempts : ",no_of_guess);
        }
        
        
    }while(random_number != guess_number);

}


int main() {
    
    srand(time(NULL));
    
    play_game();

   return 0;
}
