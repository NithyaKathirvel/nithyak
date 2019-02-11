#include <stdio.h>

int main()
{
    int year;
    printf ("Enter a year \n");
    scanf ("%d", &year);

    if (year%4 == 0 && year%100 == 0 && year%400 == 0)
        printf("\n It is LEAP YEAR.");

    else if (year%4==0 && year%100!=0)
        printf("\n It is LEAP YEAR.");
    else
        printf ("\n It is NOT LEAP YEAR.");

    return 0;
}
