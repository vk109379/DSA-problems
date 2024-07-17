#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    //Function to partition the array around the range[a,b] such 
    //that array is divided into three parts.
    void threeWayPartition(int *array, int n, int a, int b)
    {
        int low = 0, high = n - 1;
        int mid = 0;
        
        while(mid <= high){
            if(array[mid] > b){
                swap(array[high], array[mid]);
                high--;
            }
            
            else if(array[mid] < a){
                swap(array[mid], array[low]);
                low++;      
                mid++;
            }
            else{
                mid++;
            }
        }
    }
};


//{ Driver Code Starts.

void printArray(int *array, int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main()
{
    int array[] = {4,9,2,5,8,10,6,2,3,10,9,9,6};
    int  n = sizeof(array)/sizeof(array[0]);
    int a = 7, b = 8;
    
    Solution ob;  
      
    ob.threeWayPartition(array ,n ,a, b);
    printArray(array, n);
    
    return 0;;
}

// } Driver Code Ends