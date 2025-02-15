/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  :
Student ID#:
Email      :
Section    :

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int keepShopping = 1;
    int applesNeed, orangesNeed, pearsNeed, tomatoesNeed, cabbagesNeed;
    int applesPick, orangesPick, pearsPick, tomatoesPick, cabbagesPick;
    int totalApples=0, totalOranges=0, totalPears=0, totalTomatoes=0, totalCabbages=0;

    do {
        printf("Grocery Shopping\n"
            "====================\n\n"
        );

        // APPLES: prompt user for how many apples they need
        do {
            printf("How many APPLES do you need?: ");
            scanf("%d", &applesNeed);
            if (applesNeed < 0) {
                printf("ERROR: Value must be 0 or more\n");
            }
        } while (applesNeed < 0);

        printf("\n\n");

        // ORANGES: prompt user for how many oranges they need
        do {
            printf("How many ORANGES do you need?: ");
            scanf("%d", &orangesNeed);
            if (orangesNeed < 0) {
                printf("ERROR: Value must be 0 or more\n");
            }
        } while (orangesNeed < 0);

        printf("\n\n");

        // PEARS: prompt user for now many pears they need
        do {
            printf("How many PEARS do you need?: ");
            scanf("%d", &pearsNeed);
            if (pearsNeed < 0) {
                printf("ERROR: Value must be 0 or more\n");
            }
        } while (pearsNeed < 0);

        printf("\n\n");

        // TOMATOES: prompt user for now many pears they need
        do {
            printf("How many TOMATOES do you need?: ");
            scanf("%d", &tomatoesNeed);
            if (tomatoesNeed < 0) {
                printf("ERROR: Value must be 0 or more\n");
            }
        } while (tomatoesNeed < 0);

        printf("\n\n");

        // CABBAGES: prompt user for now many pears they need
        do {
            printf("How many CABBAGES do you need?: ");
            scanf("%d", &cabbagesNeed);
            if (cabbagesNeed < 0) {
                printf("ERROR: Value must be 0 or more\n");
            }
        } while (cabbagesNeed < 0);

        printf("\n\n");

        printf("-------------------\n"
            "Time to pick products!\n"
            "-------------------\n\n"
        );

        // pick apples if needed
        if (applesNeed > 0) {
            do {
                printf("Pick some APPLES... how many did you pick? : ");
                scanf("%d", &applesPick);
                if (applesPick > (applesNeed - totalApples)) {
                    printf("You picked too many... only %d more APPLE(s) are needed.\n", applesNeed - totalApples);
                }
                else if (applesPick < 1) 
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else
                {
                    totalApples += applesPick;
                    if (applesNeed != totalApples) {
                        printf("Looks like we still need some APPLES...\n");
                    }
                }

            } while (applesNeed != totalApples);
            printf("Great, that's the apples done!\n\n");
        };

        // pick oranges if needed
        if (orangesNeed > 0) {
            do {
                printf("Pick some oranges... how many did you pick? : ");
                scanf("%d", &orangesPick);
                if (orangesPick > (orangesNeed - totalOranges)) {
                    printf("You picked too many... only %d more ORANGE(s) are needed.\n", orangesNeed - totalOranges);
                }
                else if (orangesPick < 1)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else
                {
                    totalOranges += orangesPick;
                    if (orangesNeed != totalOranges) {
                        printf("Looks like we still need some oranges...\n");
                    }
                }

            } while (orangesNeed != totalOranges);
            printf("Great, that's the oranges done!\n\n");
        };

        // pick pears if needed
        if (pearsNeed > 0) {
            do {
                printf("Pick some pears... how many did you pick? : ");
                scanf("%d", &pearsPick);
                if (pearsPick > (pearsNeed-totalPears)) {
                    printf("You picked too many... only %d more PEAR(s) are needed.\n", pearsNeed - totalPears);
                }
                else if (pearsPick < 1)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else
                {
                    totalPears += pearsPick;
                    if (pearsNeed != totalPears) {
                        printf("Looks like we still need some pears...\n");
                    }
                }

            } while (pearsNeed != totalPears);
            printf("Great, that's the pears done!\n\n");
        };

        // pick tomatoes if needed
        if (tomatoesNeed > 0) {
            do {
                printf("Pick some tomatoes... how many did you pick? : ");
                scanf("%d", &tomatoesPick);
                if (tomatoesPick > (tomatoesNeed-totalTomatoes)) {
                    printf("You picked too many... only %d more TOMATOE(s) are needed.\n", tomatoesNeed - totalTomatoes);
                }
                else if (tomatoesPick < 1)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else
                {
                    totalTomatoes += tomatoesPick;
                    if (tomatoesNeed != totalTomatoes) {
                        printf("Looks like we still need some tomatoes...\n");
                    }
                }

            } while (tomatoesNeed != totalTomatoes);
            printf("Great, that's the tomatoes done!\n\n");
        };

        // pick cabbages if needed
        if (cabbagesNeed > 0) {
            do {
                printf("Pick some cabbages... how many did you pick? : ");
                scanf("%d", &cabbagesPick);
                if (cabbagesPick > (cabbagesNeed-totalCabbages)) {
                    printf("You picked too many... only %d more CABBAGE(s) are needed.\n", cabbagesNeed - totalCabbages);
                }
                else if (cabbagesPick < 1)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else
                {
                    totalCabbages += cabbagesPick;
                    if (cabbagesNeed != totalCabbages) {
                        printf("Looks like we still need some cabbages...\n");
                    }
                }

            } while (cabbagesNeed != totalCabbages);
            printf("Great, that's the cabbages done!\n\n");
        };

        printf("All the items are picked!\n\n");

        // check if user wants to shop again
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &keepShopping);
        printf("\n\n");

    } while (keepShopping);

    printf("Your tasks are done for today - enjoy your free time!\n\n");

    return 0;
}