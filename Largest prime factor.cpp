#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long n;
        cin >> n;
        while(n % 2 == 0)
            n /= 2;
        unsigned long long temp = 2;
        if(n != 1){
            for(unsigned long long i = 3 ; i <= sqrt(n) ; i += 2)
                while(n % i == 0 && n != i)
                    n /= i;
        }
        cout << n << endl;
    }
    return 0;
}
