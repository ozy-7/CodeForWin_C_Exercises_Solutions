#include <stdio.h>
int addition_operation (int* a, int* b) {
    return *a+*b;
}

int difference_operation (int* a, int* b) {
    return *a-*b;
}

int product_operation (int* a, int* b) {
    return *a*(*b);
}

int quotient_operation (int* a, int* b) {
    
    return *a/(*b);
}

int main () {
    int num1, num2;
    printf ("Input num1: ");
    scanf ("%d", &num1);
    printf ("Input num2: ");
    scanf ("%d", &num2);
    int* num1p, *num2p;
    num1p = &num1;
    num2p = &num2;
    printf ("\n");
    printf ("Sum = %d\n", addition_operation(&num1, &num2));     
    printf ("Difference = %d\n", difference_operation(num1p, num2p));
    printf ("Product = %d\n", product_operation(num1p, num2p));
    printf ("Quotient = %d\n", quotient_operation(num1p, num2p));
    return 0;
}









    