 #include <bits/stdc++.h>
using namespace std;

// E - Lowest Number


int main(){

    int size; cin>> size;
    long long int arr[size + 1];

    long long mini = 1e9;
    
    for (int i = 1; i <= size; i++)
    {
        cin>> arr[i];
        mini = min(mini, arr[i]);
    }
    int idx = -1;
    for (int i = 1; i <= size; i++)
    {
        if( arr[i] == mini ){
            idx = i;
            break;
        }
    }
    
    cout<< mini << " "<< idx << "\n";

    
    
    return 0;
}