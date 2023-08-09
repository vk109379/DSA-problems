//Linear search algorithm
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int search(int arr[], int N, int X)
    {
        for(int i = 0; i < N; i++){
            if(arr[i] == X){
                return i;
            }
        }
        return -1;
    }

};


int main()
{
    
    int sizeOfArray;

    cout << "No. of elements in array : ";
    cin >> sizeOfArray;

    int arr[sizeOfArray];
    int x;

    cout << "Input elements in array : ";

    for(int i=0;i<sizeOfArray;i++){
        cin>>arr[i];
    }
    cout << "Element to be searched in array : ";
    cin>>x;

    Solution ob;
    
    if(ob.search(arr,sizeOfArray,x) == -1){
        cout << "Not found !" << endl;
    }
    else{
        cout << "Found at index : " << ob.search(arr,sizeOfArray,x) << endl;
    }

    return 0;
    
}