#include <bits/stdc++.h>
using namespace std;

// G - Palindrome Array 


int main(){

    int size; cin>> size;
    long long int arr[size + 1];

    long long mini = 1e9;
    
    for (int i = 1; i <= size; i++)
    {
        cin>> arr[i];
    }

    bool flag = true;

    for (int i = 1, j = size; i < j; i++, j--)
    {
        if (arr[i] != arr[j]){
            flag = false;
            break;
        }
    }
    if ( flag == true ){
        cout<< "YES\n";
    }
    else{
        cout<< "NO\n";
    }
    return 0;
}