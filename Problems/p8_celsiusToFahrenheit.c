// Convert celsius to fahrenheit 
#include <stdio.h>

double celsiusToFahrenheit(double celsius);

int main(int argc, char const* argv[])
{
    double cel;
    printf("Enter Celsius Temperature: ");
    scanf("%lf", &cel);


    printf("Celsius : %.2lf => Fahrenheit : %.2lf", cel, celsiusToFahrenheit(cel));

    return 0;
}

double celsiusToFahrenheit(double celsius) {
    double fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

