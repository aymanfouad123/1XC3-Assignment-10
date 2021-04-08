//Ayman Fouad Shaik Mohammad 
#include <stdio.h>
int main()
{
    float invamt;
    int yrs;
    float rnrate;
    float addcont;
    int rows;
    float intr;
    float balance;
    do {
    printf("Enter an initial investment amount - ");
    scanf("%f", &invamt);
    if (invamt < 0) printf("Initial investment cannot be negative.\n");
    } while (invamt<0);

    do {
    printf("Enter total number of years - ");
    scanf("%d", &yrs);
    if (yrs <= 0) printf("Years must be greater than 0.\n");
    } while (yrs <= 0);

    do {
    printf("Enter a return rate - ");
    scanf("%f", &rnrate);
    if (rnrate < 0) printf("Rate cannot be negative.\n");
    } while (rnrate < 0);

    do {
    printf("Enter additional contribution per year - ");
    scanf("%f", &addcont);
    if (addcont < 0) printf("Contribution cannot be negative.\n");
    } while (addcont<0);

    printf("%-10s %-20s %-20s %-20s\n","Year","Start Balance","Interest","End Balance");
    printf("****************************************************************\n");

    for (rows = 1; rows <= yrs; rows++)
    {   

        intr = (rnrate/100)*invamt;
        balance = intr + invamt;
        printf("%-10d %-20.2f %-20.2f %-20.2f\n",rows,invamt,intr,balance);
        invamt = balance;
        invamt = invamt + addcont;

    }
    return 0;
}
