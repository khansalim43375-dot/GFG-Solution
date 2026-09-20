#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j <= i; j++){
            cout<<'*';
        }
        for(int k = 0; k < 2*(n-i-1)-1; k++){
            cout<<" ";
        }
        for(int l = 0; l <= i; l++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i = 0; i < 2*n-1; i++)
        cout<<'*';
    cout<<endl;    
    for(int i = 0; i < n-1; i++){
        for(int j = n-1-i; j > 0; j--){
            cout<<'*';
        }
        for(int k = 0; k < 2*i+1; k++){
            cout<<" ";
        }
        for(int l = n-1-i; l > 0; l--){
            cout<<'*';
        }
        cout<<endl;
    }
    

    return 0;
}