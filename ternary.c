/*
if 
if else : nested 
ladder 

*/
#include <stdio.h>

int main() {
    int score ;
    char grade ;
    
    printf("Enter you score : ");
    scanf("%d",&score);
    
    // if-else
    if(score<=100 && score>=0)
    {
        // true
        if(score<=100 && score>=90)
        {
            grade = 'A';
        }else {
            if(score<90 && score>=80)
            {
                grade = 'B';
            }else{
                if(score<80 && score>=70)
                {
                    grade = 'C';
                }else{
                    if(score<70 && score>=60)
                    {
                        grade = 'D';
                    }else{
                        if(score<60 && score>=50)
                        {
                            grade = 'E';
                        }else{
                            if(score<50)
                            {
                                grade = 'F';
                            }
                        }
                    }
                }
            }
        }
    }else {
        printf("Invalid score");
    }
    
    
    // ternary
    score<=100 && score>=0 
    ? 
        score<=100 && score>90 
        ? 
            grade = 'A'
                : 
                score<90 && score>=80 ? 
                    grade = 'B'
                    :
                        score<80 && score>=70 
                        ?
                            grade = 'C'
                        :
                        score<70 && score>=60 
                            ?
                                grade = 'D'
                            :
                                score<60 && score>=50 
                                ?
                                    grade = 'E'
                                :
                                    score<50 
                                    ?
                                        grade = 'F'
                                    : 
                                        printf("Invalid marks")
    :
        printf("Invalid score");
    ;
    
    switch(grade)
    {
        case 'A' :
            printf("Excellent work");
            break;
    }
    
    

    return 0;
}