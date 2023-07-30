#include<bits/stdc++.h>
using namespace std;

// I - Palindrome

int main() {

    long long int x; cin>>x;
    long long int temp = x;
    long long int rev = 0;

    while (x != 0)
    {
        int last = x % 10;
        rev = rev * 10 + last;
        x = x /10;
    }
    
    if (temp == rev){
        cout<<rev<<endl<<"YES"<<endl;
    } else{
        cout<<rev<<endl<<"NO\n";
    }

    return 0;
}