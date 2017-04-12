#include <stdio.h>
#include <stdlib.h>

#include "merge.h"

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

/*
 * Merge-sort an array a, which contains n elements.
 */
void merge_sort(char a[], int n)
{
    // BASIS: if a has only 1 element, there is nothing to do.
    if (n <= 1) {
        return;
    }

    // INDUCTION: merge_sort the 1st half and merge_sort the 2nd half 
    // so that we have 2 half-size sorted arrays, and then merge them 
    // into a single sorted list.

    int m = n / 2;

    // merge_sort the 1st m elements of a
    merge_sort(a, m);

    // merge_sort the remaining n - m elements of the array "a + m",
    // which is a way to take a sub-array of "a" where a[m] is the new 
    // 0th element (i.e., (a+m)[0] is the same as a[m]).
    merge_sort(a + m, n - m);

    // allocated a temporary array into which the merge function will 
    // put the merged array.
    char temp[n];

    // merge a (for which we are looking at only the 1st m elements)
    // and a+m (which has n-m elements from (a+m)[0] to (a+m)[n-m-1],
    //          which are really the same as a[m] to a[n-1])
    // into the temp array.
    merge(a, m, a + m, n - m, temp);

    // copy the temp array back into a.
    int i;
    for (i = 0; i < n; i++) {
        a[i] = temp[i];
    }
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

    merge_sort(a, n);

    print_array(a, n);
    printf("\n");

    return 0;
}
