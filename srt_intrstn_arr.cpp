#include <bits/stdc++.h>
using namespace std;

// Program to Find intersection of two sorted arrays

int main()
{
 
    int arr1[] = {3,5,10,10,10,15,15};
    int arr2[] = {5,10,10,15,30};
    // int arr1[] = {3, 5, 8};
    // int arr2[] = {2, 8, 9, 10, 15};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int ptr1 = 0, ptr2 = 0, prev = -1;

    while(ptr1 < n1 && ptr2 < n2){

        if(arr1[ptr1] == arr2[ptr2]){
            if(arr1[ptr1] != prev){
                cout << arr1[ptr1] <<" ";
                prev = arr1[ptr1];
            }
            ptr1++;
            ptr2++;
        }

        else if(arr1[ptr1] < arr2[ptr2]){
            ptr1++;
        }

        else{
            ptr2++;
        }
    }
    
    return 0;
}
