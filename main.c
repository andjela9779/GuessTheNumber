#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses;
    time_t t;

    // initialization of random number generator

    srand((unsigned) time(&t));

    // get the random number

    randomNumber = rand() % 21;

    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20 , which you must guess.\n");

    for(numberOfGuesses=5;numberOfGuesses>0;--numberOfGuesses)
    {
        printf("\nYou have %d tr%s left.",numberOfGuesses,numberOfGuesses==1 ? "y" : "ies");
        printf("Enter a guess:");
        scanf("%d",&guess);

        if ( guess == randomNumber ){
            printf("\nCongratulations. You guessed it!");
            return;
        }else if ( guess<0 || guess>20 )
        printf("I said the number is between 0 and 20.");
        else if ( randomNumber > guess )
            printf("Sorry, %d is wrong. My number is higher than that.",guess);
        else if ( randomNumber < guess )
            printf("Sorry, %d is wrong. My number is less than that.",guess);
    }

    printf("You have had five tries and failed. My number is %d.",randomNumber);

return 0;
}
