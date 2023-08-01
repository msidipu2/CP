 #include <bits/stdc++.h>
using namespace std;

// E - Lowest Number


int main(){

    int size; cin>> size;
    long long int arr[size];
    
    int idx = -1;
    int mini = 1e9;

    for (int i = 0; i < size; i++)
    {
       cin>> arr[i];
       if ( i < mini ){
        mini = arr[i];
        idx = i;
       }
    }
    
    cout<< mini << " "<< idx << "\n";

    
    
    return 0;
}