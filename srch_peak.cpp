#include<bits/stdc++.h>
using namespace std;
/* The function returns the index of any
   peak element present in the array */

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int l = 0, h = n-1, mid;
       if(n == 1 || arr[0] >= arr[1]){
           return 0;
       }
       
       else if(arr[n-1] >= arr[n-2]){
           return n-1;
       }
       
       else{
           while(h > l){
               
               mid = (l+h)/2;
               
               if(arr[mid] >= arr[mid -1] && arr[mid] >= arr[mid +1]){
                   return mid;
               }
               else if(arr[mid] < arr[mid -1]){   //going left of array if previous element is larger
                   h = mid -1;
               }
               else if(arr[mid] < arr[mid +1]){   // going right of array if next element is larger
                   l = mid +1;
               }
           }
       }
    }
};

int main() {
	int arr[] = {5,20,40,30,20,50,20};
    int  n = sizeof(arr)/sizeof(arr[0]);
    
    Solution ob;
	int A = ob. peakElement(arr,n);
	
	cout<<"One of the Peak element in array is at index : "<< A <<endl;
	
	return 0;
}