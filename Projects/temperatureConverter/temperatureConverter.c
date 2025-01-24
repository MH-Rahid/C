#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const* argv[])
{
    double temperature, convertedTemperature;
    int choice;

    do
    {
        printf("\n******** Temperature Converter **********\n");
        printf("1. Celsius To Fahrenheit. \n");
        printf("2. Fahrenheit To celsius. \n");
        printf("3. Celsius To Kelvin . \n");
        printf("4. Kelvin To Celsius. \n");
        printf("5. Fahrenheit To Kelvin. \n");
        printf("6. Kelvin To Fahrenheit. \n");
        printf("7. Exit. \n");

        printf("Enter your choice (1-7) : ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6)
        {
            printf("\nEnter the temperature : ");
            scanf("%lf", &temperature);
        }


        switch (choice)
        {
        case 1:
            convertedTemperature = (temperature * 1.8) + 32;
            printf("Temperature in Fahrenheit : %.2lf \n", convertedTemperature);
            break;
        case 2:
            convertedTemperature = (temperature - 32) * 5 / 9;
            printf("Temperature in Celsius : %.2lf \n", convertedTemperature);
            break;
        case 3:
            convertedTemperature = (temperature + 273.15);
            printf("Temperature in Kelvin : %.2lf \n", convertedTemperature);
            break;
        case 4:
            convertedTemperature = (temperature - 273.15);
            printf("Temperature in Celsius : %.2lf \n", convertedTemperature);
            break;
        case 5:
            convertedTemperature = ((temperature - 32) * 5 / 9) + 273.15;
            printf("Temperature in Kelvin : %.2lf \n", convertedTemperature);
            break;
        case 6:
            convertedTemperature = ((temperature - 273.15) * 1.8) + 32;
            printf("Temperature in Fahrenheit : %.2lf \n", convertedTemperature);
            break;
        case 7:
            printf("Exit Successfully. \n");
            exit(0);

        default:
            printf("Invalid Choice, Please select a valid option. \n");
            break;
        }
    } while (choice != 7);

    return 0;
}
