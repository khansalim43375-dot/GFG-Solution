#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for(int i = 0; i < n; i++){
        
        for(int m = 0; m < i; m++)
            cout<<" ";
            
        for(int j = 0; j < n-i-1; j++)
            cout<<'*';
            
        cout<<'*';
        
        for(int k = 0; k < n-i-1; k++)
            cout <<'*';
            
        cout<<endl;    
    }

    return 0;
}