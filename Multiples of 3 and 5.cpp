#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum1 = 0;
        long long sum2 = 0;
        long long sum3 = 0;
        sum1 = ((n / 3) * (((n / 3) * 3) + 3)) / 2;
        sum2 = ((n / 5) * (((n / 5) * 5) + 5)) / 2;
        sum3 = ((n / 15) * (((n / 15) * 15) + 15)) / 2;
        if(n % 5 == 0 || n % 3 == 0)
            cout << sum1 + sum2 - sum3 - n<< endl;
        else
            cout << sum1 + sum2 - sum3 << endl;
    }
    return 0;
}