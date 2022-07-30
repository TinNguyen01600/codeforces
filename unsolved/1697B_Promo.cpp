/*
To get the maximum total value of items received for free,
customer have to buy the most expensive items.
We sort p in ascending order and pick the last x items
y cheapest of them are free, so we sum the first y items from x
*/

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
void swap(long long int arr[] , long long int pos1, long long int pos2){
	long long int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

long long int partition(long long int arr[], long long int low, long long int high, long long int pivot){
	long long int i = low;
	long long int j = low;
	while( i <= high){
		if(arr[i] > pivot){
			i++;
		}
		else{
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

void quickSort(long long int *arr, long long int low, long long int high){
	if(low < high){
	long long int pivot = arr[high];
	long long int pos = partition(arr, low, high, pivot);
	
	quickSort(arr, low, pos-1);
	quickSort(arr, pos+1, high);
	}
}

int main(void){
	// scanf and printf decreases running time
    long int i, n, q, x, y;
    long long int sum;
    scanf("%ld %ld", &n, &q);
    long long int *arr = new long long int [n];
    for (i = 0; i < n; ++i){
        // cin >> arr[i];
        scanf("%lld", &arr[i]);
    }     
    // sort(arr, arr + n);		// C++ built-in function
    quickSort(arr, 0, n-1);
    while(q--){
        sum = 0;
        scanf("%ld %ld", &x, &y);
        long int a = n-x;
        for (i = a; i < a+y; i++)  sum += arr[i];
        printf("%lld\n", sum);
    }
}