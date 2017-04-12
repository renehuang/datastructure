#ifndef __MERGE_H__
#define __MERGE_H__

// Performs the merge operation of two sorted arrays a1 and a2.
// n1 is the number of elements in a1.
// n2 is the number of elements in a2.
// All n1+n2 elements are copied into the output array in ascending order.
// The output array is assumed to have been allocated with enough space
// by the caller of this function.
void merge(
        char a1[], int n1,
        char a2[], int n2, 
        char output[]);

#endif /* #ifndef __MERGE_H__ */
