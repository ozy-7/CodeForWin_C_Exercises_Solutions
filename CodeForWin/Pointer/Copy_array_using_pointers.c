#include <stdio.h>
int main () {
    int size;
    printf ("Input size: ");
    scanf ("%d", &size);
    int A[size];
    int B[size];
    int i;
    printf ("Input array1 elements: ");
    for (i = 0 ; i< size ; i++) {
        scanf ("%d", &A[i]);
    }
    int* Ap, *Bp;
    Ap = A;
    Bp = B;
    for (i = 0 ; i<size ; i++)
        *Ap+i = *Bp+i;
    printf ("Array1 is: ");
    for (i = 0 ; i<size-1 ; i++)
        printf ("%d, ", *Ap+i);
    printf ("%d", *Ap+size-1);
    printf ("Array2 is: ");
    for (i = 0 ; i<size-1 ; i++)
        printf ("%d, ", *Bp+i);
    printf ("%d", *Bp+size-1);
        
        

}   