#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            cout<<j+1;
        }
        for(int k = 0; k < 2*i; k++){
            cout<<" ";
        }
        for(int j = 0; j < n-i; j++){
            cout<<n-j-i;
        }
        cout<<endl;
    }

    return 0;
}