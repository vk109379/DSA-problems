// this program Search target element in Sorted Rotated Array

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
    
int srch(int X, int arr[], int h, int l){
    int mid = (l+h)/2;
    
        if(arr[mid] == X)
            return mid;
            
        else if(arr[mid] > arr[l]  &&  arr[l] <= X && arr[mid] > X){
           return Binary(arr, mid-1 , l, X);
        }
        
        else if(arr[mid] < arr[h] && arr[h] >= X && arr[mid] < X){
            return Binary(arr, h , mid+1, X);
        }
        
        else{
            if(arr[mid] > arr[h]){
                return srch(X, arr, h, mid + 1);
            }
            else if(arr[mid] < arr[l]){
                return srch(X, arr, mid-1, l);
            }
            else
                return -1;
        }
}

int main() {

    int arr[] = {3,4,5,6,7,8,9,10,1,2};
    int  h = sizeof(arr)/sizeof(arr[0]) -1, l = 0;
    int X = 1;
    int temp = srch(X, arr, h, l);
    
    if(temp == -1){
        cout << "Not Found!";
    }
    else
        cout <<"Found at index "<< temp << endl;
	
	return 0;
}