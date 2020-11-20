#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 1000001;
    bool prime[n+1]; 
        for(int i = 0 ; i < n+1 ; i++)
            prime[i] = true;

        for (int p=2; p*p<=n; p++) 
        { 
            if (prime[p] == true) 
            { 
                for (int i=p*p; i<=n; i += p) 
                    prime[i] = false; 
            } 
        }
    long sums[n+1];
    long sum = 0;
    for(int i = 2 ; i < n + 1 ; i++){
        if(prime[i]){
            sum += i;
        }
        sums[i] = sum;
    }
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << sums[n] << endl;
    }
    return 0;
}
