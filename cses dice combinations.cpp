#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    const int mod = 1e9+7;
    
    vector<int> dp(n+1,0);
    
    dp[0] = 1;
    
    
    
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if (j <= i){
                dp[i] = (dp[i] + dp[i-j])%mod;
            }
        }
    }
    cout << dp[n];

    return 0;
}


