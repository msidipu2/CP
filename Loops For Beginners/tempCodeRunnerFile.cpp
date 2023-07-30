#include <bits/stdc++.h>
using namespace std;

// R - Sequence of Numbers and Sum


int main() {
    
    int row; cin>> row;

    for (int i = 1; i <= row; i++)
    {
        int star = i * 2 - 1;
        int space = row - i;

        for (int j = 1; j <= space; j++)
        {
            cout<< " ";
        }
        for (int k = 1; k <= star; k++)
        {
            cout<< "*";
        }
        cout<< "\n";
    }  
    for (int m = 1; m <= row; m++)
    {
        int space = row - 1;
        int star = 2 * (n - row +!) -1;

        for (int j = 1; j <= sspace; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= star; k++)
        {
            cout<< "*";
        }

        }
    cout<< "\n";
    
    return 0;
}