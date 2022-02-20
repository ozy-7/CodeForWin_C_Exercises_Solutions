#include <stdio.h>
int main () {
    int A[10];
    int B[10];
    printf ("Input 10 elements in array:");
    int i;
    for (i = 0 ; i<10 ; i++) {
        scanf ("%d", &A[i]) != EOF;
    }
    printf ("Array after left rotation: ");
    int number_of_rotation;
    scanf ("%d", &number_of_rotation);
    int actual_number_of_rotation = 10-number_of_rotation;
    i=0;
    for (i = 0 ; i<actual_number_of_rotation ; i++) {
        B[i] = A[i+number_of_rotation];
    }
    i = 0;
    for (i = actual_number_of_rotation ; i<10 ; i++) {
        B[i] = A[i-actual_number_of_rotation];
    }
    i = 0;
    for (i = 0 ; i<10 ; i++) {
        printf ("%d ", B[i]);
    }
    return 0;

} 


//https://codeforwin.org/2017/03/c-program-to-left-rotate-array.html