#include <stdio.h>
int main () {
    char a;
    printf ("Enter any character: ");
    scanf ("%c", &a);
    int i = a;
    if ((i>=65 && i<=90) || (i>=97 && i<=122)) {
        printf ("It is alphabet.\n");
        return 0;
    }
    else;
        printf ("It is not alphabet.\n");
    return 0;
}

//https://codeforwin.org/2015/06/c-program-to-check-alphabet-using-conditional-operator.html