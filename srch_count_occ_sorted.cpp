// count the occurrences of element in sorted array in O(logN) time.
// determine the frequency of occurrence of x within the array efficiently using Binary Search.
#include <bits/stdc++.h>
using namespace std;


int leftindex(int N, int arr[], int X){
    
    int l = 0, h = N-1, mid;
    
    while(l <= h){
        mid = (l+h)/2;
        
        if(arr[mid] == X && arr[mid-1] != X){
            return mid;
        }
        else if(arr[mid] >= X){
            h = mid -1;
        }
        else if(arr[mid] < X){
            l = mid +1;
        }
    }
    
    return -1;
}

int rightindex(int N, int arr[], int X){
    
    int l = 0, h = N-1, mid;
    
    while(l <= h){
        mid = (l+h)/2;
        
        if(arr[mid] == X && arr[mid+1] != X){
            return mid;
        }
        else if(arr[mid] > X){
            h = mid -1;
        }
        else if(arr[mid] <= X){
            l = mid +1;
        }
    }
    
    return -1;
}

int count(int N, int arr[], int X){
    
    int left = leftindex(N, arr, X), right;

    if(left == -1){
        return -1;
    }
    else{
        
        return (rightindex(N, arr, X) - left +1);
    }
}

int main() {
	int arr[] = {2,2,2,2,3,4,4,8};
   int N = sizeof(arr)/sizeof(arr[0]);

    int k = 2;
    

    if(count(N, arr, k) == -1){
        cout << "0 (Not found !)" << endl;
    }
    else{
        cout <<"From index " <<leftindex(N, arr, k) <<" to " <<rightindex(N, arr, k) << endl;
        cout << "Occurrence of element is : " << count(N, arr, k) << endl;
    }
	
	return 0;
}