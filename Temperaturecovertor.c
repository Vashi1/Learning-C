# include <stdio.h>

int main(){
    char unit, flag;
    int temp;
    int new_temp;
    printf("Enter the unit of the current temp(C/F): \n");
    scanf("%c", &unit);
    if (unit == 'C'){
        printf("Enter the current temp in celcius: \n");
        scanf("%d", &temp);
        new_temp = (temp * 9) / 5 + 32;
        printf("The temperature in Farenheit is %d\n", new_temp);
    }
    else if (unit == 'F'){
        printf("Enter the current temp in Farenheit: \n");
        scanf("%d", &temp);
        new_temp = ((temp - 32) * 5) / 9;
        printf("The temperature in celcius is %d\n", new_temp);
    }

    return 0;
}