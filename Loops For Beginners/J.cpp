#include<bits/stdc++.h>
using namespace std;

// J - Primes from 1 to n

int main() {

    int num; cin>>num;

    bool flag = false;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 2; j < i; j++)
        {   
            if(i ==1){
                flag = true;
                break;
            }
            if (i % j == 0){
                flag = true;
                break;
            }
        }
        if(flag == false){
            cout<<i<<" ";
        }
        flag = false;
        
    }
    cout<<endl;
    

    return 0;
}