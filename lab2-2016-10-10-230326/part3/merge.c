#include "merge.h"

void merge(char a1[], int n1, char a2[], int n2, char output[]){
	int i,j,k;

	i=0;j=0;k=0;

	while (i<n1 && j<n2){
		if(a1[i]<a2[j]){
			output[k++]=a1[i++];
		}else{
			output[k++]=a2[j++];
		}
	}

	while(i<n1) output[k++]=a1[i++];
	while(j<n2) output[k++]=a2[j++];

}
