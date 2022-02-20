#include <stdio.h>
int main () {
    int rows, cols;
    printf ("Input rows: ");
    scanf ("%d", &rows);
    printf ("Input cols: ");
    scanf ("%d", &cols);
    int i;
    int j;
    for (i = 0 ; i<rows ; i++) {
        for (j = 0 ; j<cols ; j++)
            printf ("1");
    printf ("\n");
    }
    return 0;
         
}

//https://codeforwin.org/2016/06/c-program-to-print-0-1-square-number-pattern.html