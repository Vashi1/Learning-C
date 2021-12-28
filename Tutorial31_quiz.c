#include <stdio.h>


void sum(int *a, int *b){
     int d,e;
     d = *a + *b;
     e = *a - *b;
     *a = d;
     *b = e;
}


int main()
{	
     int a,b;
     printf("Please enter the value of a: ");
     scanf("%d", &a);
     printf("Please enter the value of b: ");
     scanf("%d", &b);
     sum(&a, &b);
     printf("The value of a is %d \n", a);
     printf("The value of b is %d \n", b);
     return 0;
}