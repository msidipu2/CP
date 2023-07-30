#include <bits/stdc++.h>
using namespace std;

bool luckyDigit(int digit){
    return digit == 4 or digit == 7;
}


bool isLucky(int n){
    int x = n;
    

    while(x > 0){
        int digit = x % 10;
        // if(digit == 4 or digit == 7){
        //     continue;
        // } else{
        //     return false;
        // }
        if (!luckyDigit(digit)){
            return false;
        }
        int numberWithout = x/10;
        x = numberWithout;
    }
    return true;

}


int main() {
    
    int a, b; cin>>a>>b;

    bool noLucky = false;
    for (int i = a; i <= b; i++)
    {
        if(isLucky(i) == true){
            cout<< i << " ";
            noLucky = true;
        }
    }

    if(noLucky == false){
        cout<<-1<<endl;
    }
    cout<<"\n";
    
    
    
    return 0;
}