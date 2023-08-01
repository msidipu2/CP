#include <bits/stdc++.h>
using namespace std;
// B - Searching


int main(){
    int size; cin>> size;
    long long int arr[size];

    for (int i = 0; i < size; i++)
    {
       cin>> arr[i];
    }

    long long idx = -1;
    long long int target; cin>> target;

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == target) {
            idx = i;
            break;
        }
    }
 ac
    cout<< idx << "\n";
    
    
    return 0;
}