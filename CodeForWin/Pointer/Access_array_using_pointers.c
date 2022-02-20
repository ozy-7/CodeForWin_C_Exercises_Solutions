#include <stdio.h>
int main () {
    int size;
    printf ("Input array size: ");
    scanf ("%d", &size);
    int A[size];
    printf ("Input array elements: ");
    int i;
    for (i = 0 ; i<size ; i++) {
        scanf ("%d", &A[i]);
    }
    printf ("\n");
    int *Ap;
    Ap = A;
    i = 0;
    for (i = 0 ; i<size-1 ; i++) {
        printf ("%d, ", *Ap+i);
    }
    printf ("%d", *Ap+size-1);
    return 0;
}