#include <stdio.h>

int main(void) {
    int num, oct1, oct2, oct3, oct4, oct5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    oct1 = num % 8;
    oct2 = num / 8 % 8;
    oct3 = num / 8 / 8 % 8;
    oct4 = num / 8 / 8 / 8 % 8;
    oct5 = num / 8 / 8 / 8 / 8 % 8;

    printf("Your octal number is: %d%d%d%d%d", oct5, oct4, oct3, oct2, oct1);
    
    return 0;
}