//to merge two sorted sorted arrays.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1[] = {2,4,5,10,19};
    int a2[] = {2,3,4,9,11, 45,68};
    int i ,a = 0, b = 0, la1, la2;

    
    int size = sizeof(a1)/sizeof(a1[0]) + sizeof(a2)/sizeof(a2[0]);

    int temp[size];

    for(i = 0; i <= size; i++ ){

        if(a1[a] < a2[b] || a1[a] == a2[b]){
            temp[i] = a1[a];
            a += 1;
        }
        else if(a2[b] < a1[a]){
            temp[i] = a2[b];
            b += 1;
        }
    }
    for(int j =0; j < size ; j++ ){
    cout << temp[j]<< endl;
    }
    return 0;
}
