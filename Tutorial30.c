// TO print star pattern or reversed star pattern according to user input

#include <stdio.h>
void star_pattern();
void reversed_star_pattern();
int main() 
{
    int var,n;
    printf("Whether to print star pattern(0) or reversed star pattern(1): \n");	
    scanf("%d", &var);
    if (var == 0){
        star_pattern();
    }
    else if (var == 1){
        reversed_star_pattern();
    }
    else{
        printf("Please enter a valid input\n");
    }
     return 0;
}


void star_pattern(){
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
}


void reversed_star_pattern(){
    printf("*****\n");
    printf("****\n");
    printf("***\n");
    printf("**\n");
    printf("*\n");
}