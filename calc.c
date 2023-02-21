#include <stdio.h>

int main() {
    int ch, adnum1, adnum2, subnum1, subnum2, mulnum1, mulnum2, divnum1, divnum2;
    printf("How would you like to use the calculator?\nHere are the choices: 1 for Addition,  2 for Subtraction, 3 for Multiplication, 4 for Division\nEnter: ");
    scanf("%d", &ch);
    if (ch == 1) {
        printf("Enter two numbers: \nnum1= ");
        scanf("%d", &adnum1);
        printf("num2= ");
        scanf("%d", &adnum2);
        printf("Sum of given two numbers is %d\n", adnum1 + adnum2);
    } else if (ch == 2) {
        printf("Enter two numbers: \nnum1= ");
        scanf("%d", &subnum1);
        printf("num2= ");
        scanf("%d", &subnum2);
        printf("Difference of given two numbers is %d\n", subnum1 - subnum2);
    } else if (ch == 3) {
        printf("Enter two numbers: \nnum1= ");
        scanf("%d", &mulnum1);
        printf("num2= ");
        scanf("%d", &mulnum2);
        printf("Product of given two numbers is %d\n", mulnum1 * mulnum2);
    } else if (ch == 4) {
        printf("Enter two numbers: \nnum1= ");
        scanf("%d", &divnum1);
        printf("num2= ");
        scanf("%d", &divnum2);
        if (divnum2 != 0) {
            printf("Division of given two numbers is %d\n", divnum1 / divnum2);
        } else {
            printf("Cannot divide by zero!");
        }
    } else {
        printf("Invalid option selected :(");
    }
    return 0;
}

