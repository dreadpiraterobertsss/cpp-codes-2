#include <iostream>
#include <vector>

using namespace std;


int main() {
    
    int n ,x;
    cin >> n >> x;
    vector<int> arr(n);
    
    
    for(int i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    
    vector<int> dp(x+1, x+5);
    
    dp[0] =0;
    
    for(int i = 0; i <= x; i++){
        for(int it: arr){
            if (it <= i){
                dp[i] = min(dp[i],dp[i-it] + 1); 
            }
        }
    }
    if (dp[x] != x+5){
        cout << dp[x];
    }
    else{
        cout << -1;
    }
    
    return 0;
}
