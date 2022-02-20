#include <stdio.h>
int main() {
    int size;
    printf ("Enter array size: ");
    scanf("%d", &size);
    int A[size];
    int difference_array[size];
    printf ("Enter array elements: ");
    int i;
    for (i = 0 ; i<size ; i++) {
        scanf ("%d", &A[i]);
    }
    i = 0;
    int largest;
    int difference;
    for (i = 0 ; i<size-1 ; i++) {
        if (A[i+1]>=A[i])
            largest = A[i+1];
    }
    i = 0;
    for (i = 0 ; i<size ; i++) {
        difference_array[i] = largest - A[i];
    }
    int smallest = 1;
    i = 0;
    for (i = 0 ; i<size-1 ; i++) {
        if (difference_array[i+1]<=difference_array[i] && smallest != 0)
            smallest = difference_array[i+1];
    }
    printf ("The second largest element is: %d", smallest);
    return 0;
}