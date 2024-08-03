//left rotate an array by d places
#include <bits/stdc++.h>
using namespace std;

void lrotate(int arr[], int n, int d){
    int i , temp ;

    for(int j = 0; j < d; j++){
        temp = arr[0];

        for(int i=0; i<n-1; i++){
            arr[i] = arr[i+1];
        }

        arr[n-1] = temp ;
    }
}

int main() {
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int  n = sizeof(arr)/sizeof(arr[0]);
    int d = 2; // to rotate array by 2 places to left
     cin >> d ;

    lrotate(arr, n, d);

    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }

    cout <<endl;

    return 0;
}