#include <stdio.h>
#include <stdlib.h>

#include "selectionsort.h"

/*
 * Print the characters in the array a on a single line.
 * Note that this function does not print newline at the end.
 */
void print_array(char a[], int n)
{
    int i = 0;
    while (i < n) {
        // "%c" prints the character whose ASCII code is a[i].
        printf("%c", a[i++]);
    }

    // Flush the standard output so that the characters will show up
    // on the screen.  Printing a newline will normally do it, but 
    // since we don't print newline here, we need to do it manually.
    fflush(stdout);
}

int main()
{
    srandom(0);

    // read the number of elements from the user.
    int n;
    scanf("%d", &n);

    char a[n];

    int i;
    for (i = 0; i < n; i++) {
        // a random character from {'0', '1', ..., '9'}
        a[i] = '0' + (random() % 10);

        // Or we could do a random alphabet like this:
        // a[i] = 'A' + (random() % 26);
    }

    print_array(a, n); 
    printf("\n");

    selection_sort(a, n);

    print_array(a, n);
    printf("\n");

    return 0;
}
