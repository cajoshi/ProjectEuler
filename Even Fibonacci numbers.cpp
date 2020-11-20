#include <bits/stdc++.h>
using namespace std;

unsigned long long fibonachi(unsigned long long n){
    unsigned long long sum = 0;
    unsigned long long prev = 1;
    unsigned long long sum2 = 0;
    while(sum < n){
        unsigned long long temp = prev;
        prev = sum;
        sum += temp;
        if(sum % 2 == 0 && sum < n)
            sum2 += sum;
    }
    return sum2;
}

int main(){

   int t;
   scanf("%d", &t);
   while(t--){
    unsigned long long n;
   scanf("%llu", &n);
    printf("%llu\n", fibonachi(n));
   }
    return 0;
}
