#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        long int n;
        cin >> n;
        cout << (n * ( n * n - 1 ) *(3 * n + 2)) / 12 << endl;
    }
    return 0;
}
