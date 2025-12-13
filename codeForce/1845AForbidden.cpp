#include <bits/stdc++.h>
using namespace std;

bool printOneWay(int i, int sum,
                 vector<int>& coins,
                 vector<vector<int>>& dp,
                 vector<int>& path)
{
    if (sum == 0) return true;
    if (i == 0) return false;

    // option 1: skip coin i-1
    if (dp[i-1][sum] > 0) {
        if (printOneWay(i-1, sum, coins, dp, path))
            return true;
    }

    // option 2: take coin i-1
    if (sum >= coins[i-1] && dp[i][sum - coins[i-1]] > 0) {
        path.push_back(coins[i-1]);
        if (printOneWay(i, sum - coins[i-1], coins, dp, path))
            return true;
        path.pop_back();
    }

    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> coins;
        for(int i = 1; i <= k; i++){
            if(i != x) coins.push_back(i);
        }

        int m = coins.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

        // base cases
        for(int i = 0; i <= m; i++)
            dp[i][0] = 1;

        // DP fill
        for(int i = 1; i <= m; i++){
            for(int sum = 1; sum <= n; sum++){
                dp[i][sum] = dp[i-1][sum];
                if(sum >= coins[i-1])
                    dp[i][sum] += dp[i][sum - coins[i-1]];
            }
        }

        if(dp[m][n] == 0){
            cout << "NO\n";
            continue;
        }

        vector<int> path;
        printOneWay(m, n, coins, dp, path);
        cout<<"YES\n";
        cout << path.size() << endl;
        for(int c : path) cout << c << " ";
        cout << "\n";
    }
    return 0;
}
