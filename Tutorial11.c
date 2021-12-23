# include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    switch (age)
    {
    case 3:
        printf("The age is 3");
        break;
    
    default:
        printf("The age is %d", &age);
        break;
    }
    return 0;
}