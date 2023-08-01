 #include <bits/stdc++.h>
using namespace std;

// F - Reversing


int main(){

    int size; cin>> size;
    long long int arr[size + 1];

    long long mini = 1e9;
    
    for (int i = 1; i <= size; i++)
    {
        cin>> arr[i];
    }

    for (int i = size; i >= 1; i--)
    {
        cout<< arr[i] << " ";
    }

    cout<< "\n";
    
    return 0;
}