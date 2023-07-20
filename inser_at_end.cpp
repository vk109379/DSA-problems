#include <iostream>

using namespace std;

void insertAtEnd(int arr[],int sizeOfArray,int element)
{
     arr[sizeOfArray -1] = element ;
}


int main()
{
    int arr[5] = {1, 85, 8, 3};
    int element = 5, sizeOfArray = 5;
    
    
    insertAtEnd(arr,5,5);
    for(int i= 0; i<5; i++)
    cout<<arr[i]<<" ";

    return 0;
}
