#include <stdio.h>
int main () {
    int N;
    printf ("Input N: ");
    scanf ("%d", &N);
    int i;
    int j;
    for (i = 1 ; i<N+1 ; i++) {
        for (j = 0 ; j<i ; j++)
            printf ("%d", i);
        printf ("\n"); 
    }
    return 0;
}

//https://codeforwin.org/2016/06/number-pattern-19-in-c.html