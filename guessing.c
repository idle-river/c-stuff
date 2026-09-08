#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define DEBUG true;

int random();

int main(void)
{
    int winning_number = random();
    int guess;

    printf("Guessing game!\n");
    printf("Pick the right number!\n");

    if (DEBUG)
    {
    }

    while (guess != winning_number)
    {
        printf("");
        printf("");
    }

    return 0;
}

int random()
{
    srand(time(NULL));

    // Formula: (rand() % range) + min_value
    return (rand() % 10) + 1;
}