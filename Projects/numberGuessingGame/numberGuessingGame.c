#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const* argv[])
{
    int randomNumber, guessNumber, attempts = 0;
    srand(time(0));
    randomNumber = rand() % 10 + 1;

    printf("\n********** Welcome to the Number Guessing Game!**********\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guessNumber);
        attempts++;
        if (guessNumber > randomNumber)
            printf("Too high! Try again. \n");
        else if (guessNumber < randomNumber)
            printf("Too low! Try again. \n");
        else
            printf("Congratulations! You guessed the number in %d attempts : ", attempts);


    } while (guessNumber != randomNumber);



    return 0;
}
