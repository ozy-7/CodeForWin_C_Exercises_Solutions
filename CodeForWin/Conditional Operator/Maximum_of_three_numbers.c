#include <stdio.h>
int main () {
    int num1, num2, num3;
    printf ("Input num1: ");
    scanf ("%d", &num1);
    printf ("Input num2: ");
    scanf ("%d", &num2);
    printf ("Input num3: ");
    scanf ("%d", &num3);
    if (num1>num2) {
        if (num2>num3)
            printf ("Maximum is %d.\n", num1);
        
    }
    else if (num1>num3) {
        if (num1>num3)
            printf ("Maximum is %d.\n", num2);
        else printf ("Maximum is %d.\n", num3);
    }
    else if (num1)
    
}