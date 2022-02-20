#include <stdio.h>
int main() {
    int size;
    printf ("Input size: ");
    scanf ("%d", &size);
    int A[size];
    printf("Input elements: ");
    int i;
    for (i=0 ; i<size ; i++) {
        scanf("%d", &A[i]);
    }
    printf ("Output: ");
    i=0;
    for (i = 0 ; i<size-1 ; i++) {
        printf("%d, ", A[i]);
    }
    printf("%d\n", A[size-1]);
    return 0;
}

//https://codeforwin.org/2015/07/c-program-to-read-and-print-elements-in-array.html