#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

bool debug = false;
bool verbose = false;

int random();

int main(int argc, char *argv[])
{
    int winning_number = random();
    int guess;
    int tries = 0;

    for (int i = 0; i < argc; i++) {
        if (strcmp(argv[i], "--debug") == 0) {
            debug = true;
        }

        if (strcmp(argv[i], "-v") == 0) {
            verbose = true;
        }
    }

    if (debug == true) {
        printf("DEBUG: number is %d\n", winning_number);
    }

    printf("Guessing game!\n");
    printf("Pick the right number!\n");
    
    do {
        printf("What is your pick: ");
        scanf("%d", &guess);

        printf("You said: %d\n", guess);


        if (guess < winning_number) {
            printf("More...");
        } else if (guess > winning_number) {
            printf("Less...");
        }

        tries++;
    } while (guess != winning_number);

    printf("You guessed correctly!\n");
    
    if (verbose == true) {
        printf("it took you %d tries\n", tries);
    }

    return 0;
}

int random()
{
    srand(time(NULL));

    // Formula: (rand() % range) + min_value
    return (rand() % 10) + 1;
}