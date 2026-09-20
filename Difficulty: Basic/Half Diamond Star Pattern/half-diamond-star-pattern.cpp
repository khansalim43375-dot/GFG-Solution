#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j <= i; j++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
    for(int l = 0; l < n; l++){
        cout<<'*'<<" ";
    }
    cout<<endl;
    for(int i = n-1; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }

    return 0;
}