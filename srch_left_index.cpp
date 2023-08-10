
#include <iostream>
using namespace std;


int leftIndex(int N, int arr[], int X){
    
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


int main() {
	
	int n;
    cout << "No. of elements in array : ";
    cin >> n;

    int arr[n];
    cout << "Input elements in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int k;
    cout << "Element to be searched in array : ";
    cin>>k;

    if(leftIndex(n, arr, k) == -1){
        cout << "Not found !" << endl;
    }
    else{
        cout << "Found the left index : " << leftIndex(n, arr, k) << endl;
    }
	
	return 0;
}

/*     another approach

    if(arr[mid] > X){
        h = mid -1;
    }
    else if(arr[mid] < X){
        l = mid +1;
    }
    else{
        if(mid == 0 || arr[mid-1] != X){
            return mid;
        }
        else{
            h = mid-1;    
        }
    }
*/

/* function for for right index

int rightIndex(int N, int arr[], int X){
    
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
*/