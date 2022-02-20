#include <stdio.h>
int main() {
    int size;
    scanf ("%d", &size);
    int A[size];
    int i;
    printf("Input elements: ");
    for (i = 0 ; i<size ; i++) {
        scanf ("%d", &A[i]);
    }
    int sum=0;
    printf ("Sum of all elements = ");
    i = 0;
    for (i = 0 ; i<size ; i++) {
        sum+=A[i];
    }
    printf ("%d\n", sum);
    return 0;
}

//https://codeforwin.org/2015/07/c-program-to-find-sum-of-all-elements-of-array.html