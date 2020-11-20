#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        if(n < 12)
            cout << -1 << endl;
        else{
            vector<long> a1;
            int flag = 0;
            for(int i = 3 ; i < n ; i++){
                int b = ((2 * n * i) - n * n) / (2 * i - 2 * n);
                int c = n - i - b;
                if(b > 0 && c > 0){
                    if(i * i + b * b == c * c){
                        flag = 1;
                        a1.push_back(i * b * c);
                    }
                }
            }
            if(flag == 1){
                int maxi = 0;
                for(int i = 0 ; i < a1.size() ; i++){
                    if(a1[i] > maxi)
                        maxi = a1[i];
                }
                cout << maxi << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}