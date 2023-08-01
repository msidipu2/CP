#include <bits/stdc++.h>
using namespace std;
// A - Summation


int main(){
    int size; cin>> size;
    int arr[size + 1];

    for (int i = 1; i <= size; i++)
    {
       cin>> arr[i];
    }
    
    long long sum = 0;
    for (int i = 1; i <= size; i++)
    {
        sum += arr[i];
    }
    cout<< abs(sum) << '\n';
    
    
    return 0;
}