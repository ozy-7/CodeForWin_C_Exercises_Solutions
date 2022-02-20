#include <stdio.h>
int main () {
    int year;
    printf ("Enter year: ");
    scanf ("%d", &year);
    if (year%4 == 0) {
        printf ("%d is leap year.", year);
        return 0;
    }
    else;
        printf ("%d is not leap year.", year);
    return 0; 
}

//https://codeforwin.org/2015/06/c-program-to-check-leap-year-using-conditional-operator.html