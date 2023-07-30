#include <bits/stdc++.h>
using namespace std;

// Q - Digits


int main() {
    
    int testCase; cin>>testCase;

    while (testCase--){
    
    int x; cin>>x;
        if (x == 0){
            cout<< 0 <<'\n';
            continue;
        }
        while (x > 0){
            int digit = x % 10;
            cout<< digit <<" ";
            x = x / 10;
        }
        cout<<"\n";
    }
    
    return 0;
}