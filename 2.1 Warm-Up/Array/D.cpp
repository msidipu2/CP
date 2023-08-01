 #include <bits/stdc++.h>
using namespace std;

// D - Positions in array 


int main(){

    int size; cin>> size;
    long long int arr[size];

    for (int i = 0; i < size; i++)
    {
       cin>> arr[i];
    }
    
    for (int j = 0; j < size; j++)
    {
        if ( arr[j] <= 10 )
        {
            printf("A[%d] = %lld\n", j, arr[j]);
        }
    }
    
    
    
    return 0;
}