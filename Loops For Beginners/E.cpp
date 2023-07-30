#include<bits/stdc++.h>
using namespace std;

int main() {

    int testCase; cin>>testCase;
    int maximum = 0;

    while (testCase--)
    {
        int x; cin>>x;
        maximum = max(maximum,x);
    }
    cout<<maximum<<endl;
    

    return 0;
}