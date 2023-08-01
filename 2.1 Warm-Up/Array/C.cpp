#include <bits/stdc++.h>
using namespace std;

// C - Replacement


int main(){

    int size; cin>> size;
    long long int arr[size + 1];

    for (int i = 1; i <= size; i++)
    {
       cin>> arr[i];
    }
    
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] > 0){
            arr[i] = 1;
        }
        if (arr[i] < 0){
            arr[i] = 2;
        }
    }
    for (int i = 1; i <= size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "\n";
    
    
    return 0;
}