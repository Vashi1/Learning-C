#include <stdio.h>
int func1(int array[]){
    for(int i = 0; i < 5; i++){
        printf("The value of array at position %d is %d\n", i, array[i]);
    }
}

int func2(int *ptr){
    for(int i = 0; i < 5; i++){
        printf("The value of array at position %d is %d\n", i, ptr[i]);
    }
    
}

int main()
{	
    int arr[] = {1,2,3,4,5};
    //func1(arr);
    func2(arr);
     return 0;
}