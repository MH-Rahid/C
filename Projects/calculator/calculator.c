#include <stdio.h>

double addition(double num1, double num2);
double subtraction(double num1, double num2);
double multiplication(double num1, double num2);
double division(double num1, double num2);
int modulus(int num1, int num2);

int main(int argc, char const* argv[])
{

    double num1, num2, result;
    int choice;
    printf("\n********** Welcome to the simple Calculator! *********\n");


    do
    {
        printf("\n\n1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Modulus \n");
        printf("6. Exit \n");
        printf("Enter your Choice (1-6)\n");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {

            printf("Enter two number: \n");
            scanf("%lf%lf", &num1, &num2);
        }

        switch (choice)
        {
        case 1:
            result = addition(num1, num2);
            printf("Result : %.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case 2:
            result = subtraction(num1, num2);
            printf("Result : %.2lf - %.2lf = %.2lf", num1, num2, result);

            break;
        case 3:
            result = multiplication(num1, num2);
            printf("Result : %.2lf * %.2lf = %.2lf", num1, num2, result);

            break;
        case 4:
            result = division(num1, num2);
            printf("Result : %.2lf / %.2lf = %.2lf", num1, num2, result);

            break;
        case 5:
            result = modulus((int)num1, (int)num2);
            printf("Result : %d %% %d = %d", (int)num1, (int)num2, (int)result);

            break;
        case 6:
            printf("\nExit Successfully. \n");
            break;
        default:
            printf("Invalid choice, Please select a valid options");
        }
    } while (choice != 6);



    printf("\n\n************* Thank you for using me. **************");

    return 0;
}


double addition(double num1, double num2) {
    return (num1 + num2);
}

double subtraction(double num1, double num2) {
    return (num1 - num2);
}

double multiplication(double num1, double num2) {
    return (num1 * num2);
}

double division(double num1, double num2) {
    if (num2 != 0)
        return (num1 / num2);
    else {
        printf("Error:  Division by zero not allowed. \n");
        return 0;
    }
}

int modulus(int num1, int num2) {
    return (num1 % num2);
}