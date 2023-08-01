#include <bits/stdc++.h>
using namespace std;

//  H - Sorting 


int main(){

    int size; cin>> size;
    int arr[size + 1];

    for (int i = 1; i <= size; i++)
    {
        cin>> arr[i];
    }
    
    sort(arr + 1 , arr + size + 1);

    for (int i = 1; i <= size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "\n";

    return 0;
}