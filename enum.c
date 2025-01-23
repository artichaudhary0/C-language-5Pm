#include <stdio.h>

// struct Arti5PM{
//     int grid ;
//     char name[100] ;
//     char course[100] ;
//     float fees ;
// };

enum Arti5PM {mon,tue,wed,thru,fri,sat,sun};
            // 0  1    2   3   4   5   6 , 7

int main() {
    
    enum Arti5PM st1 = wed;
    
    if(st1 == sat || st1 == sun)
        printf("chutti");
    else
        printf("Lecture");
    
    
    
    
    return 0;
}