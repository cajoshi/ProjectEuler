#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[20][20];
    for(int i = 0 ; i < 20 ; i++){
        for(int j = 0 ; j < 20 ; j++){
            cin >> arr[i][j];
        }
    }
    int maxsum = 0;
    for(int i = 0 ; i < 17 ; i++){
        for(int j = 0 ; j < 17 ; j++){
            if(arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3] > maxsum){
                maxsum = arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3];
                
            }
            if(arr[i][j] * arr[i+1][j] * arr[i+2][j] * arr[i+3][j] > maxsum){
                maxsum = arr[i][j] * arr[i+1][j] * arr[i+2][j] * arr[i+3][j];
                
            }
            if(arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2] * arr[i+3][j+3] > maxsum){
                maxsum = arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2] * arr[i+3][j+3];
                
            }
            if(arr[i][j+3] * arr[i+1][j+2] * arr[i+2][j+1] * arr[i+3][j] > maxsum){
                maxsum = arr[i][j+3] * arr[i+1][j+2] * arr[i+2][j+1] * arr[i+3][j];
                
            }
        }
    }
    for(int i = 17 ; i < 20 ; i++){
        for(int j = 0 ; j < 17 ; j++){
            if(arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3] > maxsum){
                maxsum = arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3];
                
            }
        }
    }
    for(int i = 0 ; i < 17 ; i++){
        for(int j = 17 ; j < 20 ; j++){
            if(arr[i][j] * arr[i+1][j] * arr[i+2][j] * arr[i+3][j] > maxsum){
                maxsum = arr[i][j] * arr[i+1][j] * arr[i+2][j] * arr[i+3][j];
                
            }
        }
    }
    cout << maxsum;
    return 0;
}
