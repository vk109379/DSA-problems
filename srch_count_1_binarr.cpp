// count the occurrences of 1's in sorted binary array in O(logN) time.
// determine the frequency of occurrence of 1 within the binary array efficiently using Binary Search.
#include <bits/stdc++.h>
using namespace std;


int leftindex(int N, int arr[]){
    
    int l = 0, h = N-1, mid;
    
    while(l <= h){
        mid = (l+h)/2;
        
        if(arr[mid] == 1 && arr[mid-1] != 1){
            return mid;
        }
        else if(arr[mid] >= 1){
            h = mid -1;
        }
        else if(arr[mid] < 1){
            l = mid +1;
        }
    }
    
    return -1;
}

int count(int N, int arr[]){
    int left = leftindex(N, arr), right;

    if(left == -1){
        return -1;
    }
    else{
        
        return (N-left);
    }
}

int main() {
	int arr[] = {0,0,0,1,1,1,1,1,1};
   int N = sizeof(arr)/sizeof(arr[0]);
   
    if(count(N, arr) == -1){
        cout << "0 (Not found !)" << endl;
    }
    else{
        cout << "Total no. of 1's are : " << count(N, arr) << endl;
    }
	
	return 0;
}