#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// K - Divisors

int main() {

    int A,B; cin>>A>>B;
    int maximum = 0;

    for (int i = 1; i <= min(A,B); i++)
    {
        if( A % i == 0 && B % i == 0){
            maximum = max(maximum,i);
        }
    }
    cout<<maximum<<endl;


    return 0;
}