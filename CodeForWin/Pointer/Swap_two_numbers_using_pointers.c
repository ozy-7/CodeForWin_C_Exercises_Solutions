#include <stdio.h>
void swapper (int* num1, int* num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main() {
    int num1,num2;
    printf ("Input num1: ");
    scanf ("%d", &num1);
    printf ("Input num2: ");
    scanf ("%d", &num2);
    swapper(&num1, &num2);
    printf ("\nNumbers after swapping: \n");
    printf ("Num1: %d\n", num1);
    printf ("Num2: %d\n", num2);
    
}