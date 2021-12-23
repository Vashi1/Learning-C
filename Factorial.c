# include <stdio.h>
int value = 1;
int factorial(int a){
    if (a > 1){
        value *= a;
        factorial(a - 1);
        }
    else if (a == 1){
        return value;
        }
    else if (a == 0){
        return 0;
    }
    }

int main(){
    int b,c;
    printf("Enter the required number: ");
    scanf("%d", &b);
    c = factorial(b);
    printf("%d", c);
    return 0;
}