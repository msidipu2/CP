#include<bits/stdc++.h>
using namespace std;

// G - Factorial

int main() {

    int testCase; cin>>testCase;
    
        

    while (testCase--)
    {   
        int number; cin>>number;
        long long factorial = 1;
        if (number == 0){
            cout<<1<<endl;
        }else{
            for (int i = 1; i <= number; i++)
            {
                factorial *= i;
            }
            cout<<factorial<<endl;
        }
    }

    return 0;
}