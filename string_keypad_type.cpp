#include<bits/stdc++.h>
using namespace std;

//Function to find matching decimal representation of a string as on the keypad
// For ex: if you are given amazon then its corresponding decimal //representation will be 262966
string printNumber(string s, int n) 
{
    int arr[128] = {0};
    int numval = 2;
    int counter = 1;
    
    for(int i = 97; i < 123; i++){
        arr[i] = numval;
        counter++;

        if(counter >= 4 ){
            if((numval == 7 || numval == 9)){
                if(counter == 5){
                    numval++;
                    counter = 1;
                }
                continue;
            }
            numval++;
            counter = 1;
        }
    }

    for(int i = 0; i < n; i++){
        s[i] = arr[s[i]] + '0';
    }
    return s;
}

int main()
{
    string s ="amazon";
    int len = s.length();
    
    cout << printNumber(s,len) << "\n";
	return 0;
}
