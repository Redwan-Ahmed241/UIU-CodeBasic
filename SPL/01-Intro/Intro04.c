// Program that will declare an integer, a floating point number, a character.Then it will initialize them with values and print those values.
// The integer value : 5 The floating point value : 3.141593 The character value : a
//  The integer value : 100 The floating point value : 1.618000 The character value : z

#include <stdio.h>
void main()
{
    int num1;
    float num2;
    char var;

    num1 = 5;
    num2 = 3.141593;
    var = 'a';
    printf("The integer value: %d \n", num1);
    printf("The floating point value: %f \n", num2);
    printf("The character value: %c \n", var);

    num1 = 100;
    num2 = 1.618000;
    var = 'z';
    printf("The integer value: %d \n", num1);
    printf("The floating point value: %f \n", num2);
    printf("The character value: %c \n", var);
}