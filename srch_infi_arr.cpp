//given a sorted infinite array this program determine the presence or absence of a given target element in the array

#include <bits/stdc++.h>
using namespace std;

int Binary(int arr[], int h, int l, int K) { 
    int  mid;
    
    while(l <= h){
        mid = (l+h)/2;
        
        if(arr[mid] == K){
            return mid;
        }
        else if(arr[mid] > K){
            h = mid-1;
        }
        else if(arr[mid] < K){
            l = mid+1;
        }
    }
    return -1;
}
    
int srch(int X, int arr[]){
    
    int i = 1;
    
    if(arr[0] == X)
        return 0;
    
    while(arr[i] <= X){
        if(arr[i] == X){
            return i;
        }
        i *= 2;
    }
    return Binary(arr, i-1, i/2, X);
}


int main() {

    int arr[] = {1, 2, 3, 5, 5};

	int k = 4;
    
    cout <<  srch(k, arr); << endl;
	
	return 0;
}