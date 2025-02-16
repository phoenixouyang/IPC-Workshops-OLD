/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
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

// macros
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    const int JAN = 1;
    const int DEC = 12;

    int year, month, day = 01;
    int validDate = 0;
    int i;

    double mornRate, evenRate, combRate;
    double mornTotal = 0, evenTotal = 0, combTotal = 0;

    printf("General Well-being Log\n"
        "=======================\n"
    );

    do {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);

        if (year > MAX_YEAR || year < MIN_YEAR) {
            printf("ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        else if (month > DEC || month < JAN) {
            printf("ERROR: Jan.(1) - Dec.(12)\n");
        }
        else {
            validDate = 1;
        }
    } while (!validDate);

    printf("\n*** Log date set! ***\n\n");


    for (i = 0; i < LOG_DAYS; i++) {

        // mutiple selection to map the month value to the three month representation (WITHOUT ARRAYS)
        if (month == 1) {
            printf("%d-JAN-%02d", year, day + i);
        }
        else if (month == 2) {
            printf("%d-FEB-%02d", year, day + i);
        }
        else if (month == 3) {
            printf("%d-MAR-%02d", year, day + i);
        }
        else if (month == 4) {
            printf("%d-APR-%02d", year, day + i);
        }
        else if (month == 5) {
            printf("%d-MAY-%02d", year, day + i);
        }
        else if (month == 6) {
            printf("%d-JUN-%02d", year, day + i);
        }
        else if (month == 7) {
            printf("%d-JUL-%02d", year, day + i);
        }
        else if (month == 8) {
            printf("%d-AUG-%02d", year, day + i);
        }
        else if (month == 9) {
            printf("%d-SEP-%02d", year, day + i);
        }
        else if (month == 10) {
            printf("%d-OCT-%02d", year, day + i);
        }
        else if (month == 11) {
            printf("%d-NOV-%02d", year, day + i);
        }
        else {
            printf("%d-DEC-%02d", year, day + i);
        }
        
        printf("\n");
        
        // get morning rating
        do {
            printf("Morning rating (0.0-5.0): ");
            scanf("%lf", &mornRate);
            if (mornRate > 5 || mornRate < 0) {
                printf("ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        } while (mornRate > 5 || mornRate < 0);

        // get evening rating
        do {
            printf("Evening rating (0.0-5.0): ");
            scanf("%lf", &evenRate);
            if (evenRate > 5 || evenRate < 0) {
                printf("ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        } while (evenRate > 5 || evenRate < 0);

        mornTotal += mornRate;
        evenTotal += evenRate;
        printf("\n");
    }

    combTotal = mornTotal + evenTotal;

    // display summary of ratings   
    printf("Summary\n"
        "=========\n"
    );
    printf("Morning total rating: %.3lf\n", mornTotal);
    printf("Evening total rating: %.3lf\n", evenTotal);
    printf("--------------------------------\n");
    printf("Overall total rating: %.3lf\n\n", combTotal);

    printf("Average morning rating: %.1lf\n", mornTotal / LOG_DAYS);
    printf("Average evening rating: %.1lf\n", evenTotal / LOG_DAYS);
    printf("--------------------------------\n");
    printf("Average overall rating: %.1lf\n", combTotal / (LOG_DAYS * 2));


    return 0;
}