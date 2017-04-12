Running time analysis

When input size = 10k, 100k, 200k, 400k

The user running time of selectionsort = 0.14, 15.50, 60.53, 243.22

The user running time of mergesort = 0.00, 0.02, 0.04, 0.10

We can see that the running time of selectionsort does fit the expectation of
O(n^2), meanwhile the merge sort follows O(n*log n);

This classification of algorithm running times have huge impact on real-world
performance.

As for the memory consumption, I tried to input 10k,100k, 200k and 400k to the
merge sort program.

And the RAM for each input is: 1524, 1536, 1824, 2212

Clearly, it is not linearly depends on the input size. 
