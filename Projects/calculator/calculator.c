#include <stdio.h>
void addition(double num1, double num2);
void subtraction(double num1, double num2);
void multiplication(double num1, double num2);
void division(double num1, double num2);
void modulus(int num1, int num2);

int main(int argc, char const* argv[])
{
    printf("\n********** Welcome to the simple Calculator! *********\n\n\n");
    char count;


    do
    {
        char operator;
        double x, y;
        scanf("%lf %c %lf", &x, &operator, &y);


        switch (operator)
        {
        case '+':
            addition(x, y);
            break;
        case '-':
            subtraction(x, y);
            break;
        case '*':
            multiplication(x, y);
            break;
        case '/':
            division(x, y);
            break;

        default:
            printf("\n invalid inputs : %5.2lf %3c %5.2lf \n", x, operator, y);
        }


        printf("\n\n Do you want to perform another operation? (y/n) : ");
        getchar();
        scanf("%c", &count);

    } while (count == 'y' || count == 'Y');


    printf(" Thank you for using me.");

    return 0;
}


void addition(double num1, double num2) {
    printf("\n%20.2lf + %.2lf = %.2lf", num1, num2, (num1 + num2));
}

void subtraction(double num1, double num2) {
    printf("\n%20.2lf - %.2lf = %.2lf", num1, num2, (num1 - num2));
}

void multiplication(double num1, double num2) {
    printf("\n%20.2lf * %.2lf = %.2lf", num1, num2, (num1 * num2));
}

void division(double num1, double num2) {
    if (num2 != 0)
        printf("\n%20.2lf / %.2lf = %.2lf", num1, num2, (num1 / num2));
    else
        printf(" Division can not by zero");
}