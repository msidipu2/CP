#include <bits/stdc++.h>
using namespace std;

// R - Sequence of Numbers and Sum


int main() {
    
    int n, m;

    int sum = 0;

    while(cin>> n >> m){
        
        if(n <= 0 or m <= 0){
            
            break;
        }
        for (int i = min(n, m); i <= max(n, m); i++)
        {
            sum += i;
            cout<< i << ' ';
        }
        cout<<"sum ="<<sum<<endl;
        sum = 0;
    }
    return 0;
}