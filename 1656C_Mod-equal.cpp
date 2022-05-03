#include <iostream>
#include <algorithm>
using namespace std;

/*
The idea of the solution is that any array with elements (>1) can be equalized by mod because we can mod all the elements
with the highest element multiple times, then we get all the numbers to 0. For ex:
a   b   c   d   (in ascending order)
a   b   c   0   (mod d)
...             (mod c, b, a next)
0   0   0   0

In case there are 1s in the array, we have 2 cases:
1. There are 0(s) also in the array, then the output is "NO", because x>=2 and 0,1 cannot be equalized by mod x
2. There are no 0 in the array. Sort them in ascending order. We have 2 cases:
    2.1 There are 2 consecutive numbers. The output is "NO" because 2 consecutive numbers cannot have 
        the same remainder when divided by x>=2.
    2.2 There are not 2 consecutive numbers. The output is "YES". We can mod all elements with (the highest element-1),
        then we get all numbers to 1. For ex:
        a   b   c   d   (in ascending order)
        a   b   c   1   (mod (d-1))
        ...             (mod (c-1), (b-1), (a-1))
        1   1   1   1
*/

void mysort(long int *a, long int size){
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
        long int count_0 = 0, count_1 = 0;
        for (i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] == 0)    count_0++;
            if (arr[i] == 1)    count_1++;
        }

        if(count_1 == 0){       //if there is no 1 in the array
            cout << "YES\n";
        }
        else{                   //if there are 1(s) in the array
            if(count_0 > 0) cout << "NO\n";     //if there are 0(s) in the array
            else{               //if there is no 0 in the array
                //mysort(arr, n);
                sort(arr, arr+n);
                int consecutive = 0;
                for (i = 1; i < n; i++) {
                    if(arr[i] - arr[i-1] == 1){
                        consecutive = 1;
                        break;
                    }
                }
                if(consecutive == 0) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
}