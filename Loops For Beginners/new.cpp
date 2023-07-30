#include<bits/stdc++.h>
using namespace std;

int main() {

    int test; cin>>test;
    int even = 0, odd = 0, pos = 0, neg = 0;

    while(test--){
        int x; cin>>x;

        if (x % 2 == 0){
            even++;
        }else{
            odd++;
        }

        if(x > 0){
            pos++;
        } else if(x < 0){
            neg++;
        }
    }

    cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<pos<<endl<<"Negative: "<<neg<<endl;

    return 0;
}