#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int A[9] = {7,4,3,1,9,2,8,5,6};

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void SelectionSort(int* A, int n){

	int i,j;
	for(i=0; i< n-1; i++){

		int iMin = i;

		for(j=i+1; j<n; j++){

			if(A[j] < A[iMin])
				iMin = j;
		}
		int temp = A[i];
		A[i] = A[iMin];
		A[iMin] = temp;
	}
}

void BubbleSort(int* A, int n){

	int k, i;
	for(k=1; k<=n-1; k++){

		int flag = 0;
		for(i =0; i<=n-k-1; i++){

			if(A[i] > A[i+1]){
				int temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
				flag =1;
			}
		}
		if(flag ==0) break;
	}
}

void InsertionSort(int* A, int n){

	int i, hole;
	for(i=1; i<= n-1; i++){

		int value = A[i];
		hole = i;
		while((hole>0)&&(A[hole-1]>value)){
			A[hole] = A[hole-1];
			hole = hole-1;
		}
		A[hole] = value;
	}
}


void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
    int j;

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main(void){

	int i;
	//SelectionSort(A,9);
	//BubbleSort(A,9);
	//InsertionSort(A,9);
	int A_size = sizeof(A)/sizeof(A[0]);

	//mergeSort(A, 0, A_size - 1);

	quickSort(A,0,9);
	for(i=0; i<9; i++){
		printf("The sorted array %d \n", A[i]);
	}

	return 0;

}
