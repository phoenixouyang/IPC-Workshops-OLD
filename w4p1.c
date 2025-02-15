/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  :
Student ID#:
Email      :
Section    :

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    char loop;
    int i, keepLoop = 1;

    printf(
        "========================\n"
        "Loop application STARTED\n"
        "========================\n\n"
    );
    
    do {
        printf(
            "D = do/while | W = while | F = for | Q = quit\n"
            "Enter loop type and the number of times to iterate (Quit = Q0): "
        );
        scanf(" %c%d", &loop, &i);

        // validation checks for correct inputs, and loop if valid
        if (loop == 'Q' && i != 0)
        {
            printf("ERROR: To quit, the number of iterations should be 0!\n\n");
        }
        // set keepLoop to false if user wants to quit, and enters Q0 correctly
        else if (loop == 'Q' && i == 0) {
            keepLoop = 0;
            printf("\n\n");
        }
        else if (loop != 'D' && loop != 'W' && loop != 'F' && loop != 'Q') {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
        else if (i < 3 || i > 20) {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
        }

        // correct DO WHILE LOOP
        else if (loop == 'D') {
            printf("DO-WHILE:   ");
            do {
                printf("D");
                i--;
            } while (i > 0);
            printf("\n\n");
        }

        // correct WHILE loop
        else if (loop == 'W') {
            printf("WHILE:   ");
            while (i > 0) {
                printf("W");
                i--;
            }
            printf("\n\n");
        }
        
        // correct FOR loop
        else if (loop == 'F') {
            printf("FOR:   ");
            for (i; i > 0; i--) {
                printf("F");
            }
            printf("\n\n");
        }
        else {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }

    } while (keepLoop);

    printf(
        "========================\n"
        "Loop application ENDED\n"
        "========================\n\n"
    );

    return 0;
}