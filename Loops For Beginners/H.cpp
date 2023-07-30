#include<bits/stdc++.h>
using namespace std;

// H - One Prime

int main() {

    long long x; cin>>x;
    bool flag = false;

    if (x < 2){
        cout<<"NO\n";

    } else{
        
        if(flag == false){
            for (int i = 2; i < x; i++)
            {
                if(x % i == 0){
                    cout<<"NO\n";
                    flag = true;
                    break;
                }

                
                
            }
            
        }
        if (flag == false){
            cout<<"YES\n";
        }
        
        
    }

    return 0;
}