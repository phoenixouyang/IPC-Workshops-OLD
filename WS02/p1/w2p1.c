/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
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
    const double TAX = 0.13;
    const char patSize = 'S';

    float smlPrice, medPrice, lrgPrice;
    int smlInt, medInt, lrgInt, intTaxes;

    float subTotal, taxes, total;
    int qty;
    
    // set shirt prices based on user input
    printf("Set Shirt Prices\n");
    printf("=================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f", &smlPrice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f", &medPrice);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f", &lrgPrice);

    // convert to cents
    smlInt = (float)smlPrice * 100 + 0.4;
    medInt = (float)medPrice * 100 +0.4; 
    lrgInt = (float)lrgPrice * 100 + 0.4;

    printf("\n\nsmall int: %d\n\n", smlInt);

    // display all shirt prices
    printf(
        "\nShirt Store Price List\n"
        "=========================\n"
        "SMALL: $%.2f\n"
        "MEDIUM: $%.2f\n"
        "LARGE: $%.2f\n\n",
        smlPrice, medPrice, lrgPrice
    );

    // Request number of shirts for input
    printf("Patty's shirt size is: '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &qty);

    // calculate totals and subtotals
    subTotal = qty * (smlInt / 100.00);
    intTaxes = TAX * qty * smlInt + 0.4;
    taxes = intTaxes / 100.00;
    total = subTotal + taxes;

    // display cost, taxes and subtotal
    printf(
        "\nPatty's shopping cart...\n"
        "Contains   : %d shirts\n"
        "Subtotal   : $%8.4f\n"
        "Taxes      : $%8.4f\n"
        "Total      : $%8.4f\n",
        qty, subTotal, taxes, total
    );
  

    return 0;
}