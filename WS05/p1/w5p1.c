/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
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

int main(void)
{
    const int JAN = 1;
    const int DEC = 12;

    int year, month, day = 01;
    int validDate = 0;

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

    printf("*** Log date set! ***\n\n");

    // mutiple selection to map the month value to the three month representation (WITHOUT ARRAYS)
    if (month == 1) {
        printf("Log starting date: %d-JAN-01", year);
    }
    else if (month == 2) {
        printf("Log starting date: %d-FEB-01", year);
    }
    else if (month == 3) {
        printf("Log starting date: %d-MAR-01", year);
    }
    else if (month == 4) {
        printf("Log starting date: %d-APR-01", year);
    }
    else if (month == 5) {
        printf("Log starting date: %d-MAY-01", year);
    }
    else if (month == 6) {
        printf("Log starting date: %d-JUN-01", year);
    }
    else if (month == 7) {
        printf("Log starting date: %d-JUL-01", year);
    }
    else if (month == 8) {
        printf("Log starting date: %d-AUG-01", year);
    }
    else if (month == 9) {
        printf("Log starting date: %d-SEP-01", year);
    }
    else if (month == 10) {
        printf("Log starting date: %d-OCT-01", year);
    }
    else if (month == 11) {
        printf("Log starting date: %d-NOV-01", year);
    }
    else {
        printf("Log starting date: %d-DEC-01", year);
    }


    return 0;
}