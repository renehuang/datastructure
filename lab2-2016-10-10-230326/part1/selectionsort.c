#include "selectionsort.h"

void selection_sort(char a[], int n){
	int iMin;
	int temp=0;
	for (int i=0; i<n-1;i++){
		iMin=i;

		for (int j=i+1; j<n; j++){
			if(a[j]<a[iMin]){
				iMin=j;
			}
		}

		if(iMin!=i){
			temp=a[i];
			a[i]=a[iMin];
			a[iMin]=temp;
		}
	}
}

