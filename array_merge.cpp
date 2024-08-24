//to merge two sorted sorted arrays.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1[] = {1,2,3,4};
    int a2[] = {1,2,3,4,5};
    int i ,a = 0, b = 0;

    int size = sizeof(a1)/sizeof(a1[0]) + sizeof(a2)/sizeof(a2[0]);
    int temp[size];

    for(i = 0; i < size; i++ ){
        
        if(a1[a] <= a2[b]){
            temp[i] = a1[a];
            a++;
            if(a == sizeof(a1)/sizeof(a1[0]))
                   a1[a] = INT_MAX;
        }

        else{ 
            temp[i] = a2[b];
            b++;
            if(b == sizeof(a2)/sizeof(a2[0]))
                   a2[b] = INT_MAX;
        }
    }

    for(int j =0; j < size ; j++ ){
        cout << temp[j]<< " ";
    }

    return 0;
}
