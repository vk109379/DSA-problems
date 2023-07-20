#include <iostream>

using namespace std;

void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        for(int i = sizeOfArray-1; i >= index; i-- ){
            arr[i] = arr[i-1];
        }
        
        arr[index] = element;
        
    }

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int element = 5, sizeOfArray = 6, index = 4;
    
    
    insertAtIndex(arr, sizeOfArray, index, element);
    
    for(int i = 0; i < sizeOfArray; i++)
    cout<<arr[i]<<" ";

    return 0;
}
