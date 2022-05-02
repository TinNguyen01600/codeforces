#include <iostream>
using namespace std;

void sort(long int *a, long int size){
    long int i, k;
    for (i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
		   if(a[i]>a[j]){
			   k=a[i];
			   a[i]=a[j];
			   a[j]=k;
		    }
		}
	}
}

int main(void){
   int t;  cin >> t;
    while(t--){
        long int n; cin>>n;
        long int i, j;
        long int *arr = new long int [n];
        for (i = 0; i < n; ++i) {
            cin >> arr[i];
        }
    }
}