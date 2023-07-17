#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        if(amount==0) return 0;
        if(n==1){
            if(amount%coins[0]==0) return amount/coins[0];
            else return -1;
        }
        //intiaialsisation
        vector<vector<int>> dp(n+1,vector<int>(amount+1,0));
        for(int i=0;i<=amount;i++) dp[0][i]=INT_MAX-1;
        //coding part
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount ;j++){
                if(j>=coins[i-1]) dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                else dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][amount]==0 or dp[n][amount]==INT_MAX or dp[n][amount]==INT_MAX-1) return -1;
        return dp[n][amount];
    }
};
int main()
{
    return 0;
}