#include<bits/stdc++.h>
using namespace std;

int rev(int i){
    int rem = 0;
    int rnum = 0;
    while(i){
        rem = i % 10;
        rnum = rnum * 10 + rem;
        i /= 10;
    }
    return rnum;

}

int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        int n;
        cin >> n;
        int maxi = 0;
        for(int j = 100 ; j < 1000 ; j++){
            for(int k = 100 ; k < 1000 ; k++){
                int prod = j * k;
                if(rev(prod) == prod && prod < n){
                    if(prod > maxi){
                        maxi = prod;
                    }
                }
            }
        }
        cout << maxi << endl;
    }
    return 0;
}
