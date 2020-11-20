#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<string> s;
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        string k;
        cin >> k;
        s.push_back(k);
    }
    sort(s.begin(),s.end());
    int q;
    cin >> q;
    for(int i = 0 ; i< q ; i++){
        string req;
        cin >> req;
        int sum = 0;
        for(int j = 0 ; j < req.size() ; j++){
            sum += (req[j] - 64);
        }
        
    vector<string>::iterator it = find(s.begin(),s.end(),req);
    cout << sum * (it  - s.begin() + 1) << endl;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

        