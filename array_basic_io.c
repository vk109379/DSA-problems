#include<stdio.h>
#define maxsize 100

int main()
{
    
int arr[maxsize];
int size;

printf("Enter the size of the array:\n");
scanf("%d", &size);

printf("Enter the elements of the array:\n");
for(int i=0; i<size; i++)
{
    scanf("%d", &arr[i]);
}

printf("The elements of array you entered are:\n");
for(int i=0;i<size;i++)
{
    printf("%d\t", arr[i]);
}

    return 0;
}