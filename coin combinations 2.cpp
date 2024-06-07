#include <iostream>
#include <vector>

using namespace std;


int main() {
    
    int n ,x;
    cin >> n >> x;
    vector<int> arr(n);
    const int mod = 1e9+7;
    
    
    for(int i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    
    vector<int> dp(x+1,0);
    
    dp[0] = 1;
    
    for(int it: arr){
        for(int i = 1; i <= x; i++){
            if (it <= i){
                dp[i] = (dp[i] +  dp[i-it]) % mod; 
            }
        }
    }
    
    cout << dp[x];
    
    
    return 0;
}

