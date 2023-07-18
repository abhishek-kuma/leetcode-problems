#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    vector<vector<int>> dp;
    int solve(vector<int> & prices,int i,bool buy){
        if(i>=prices.size()) return 0;
        //coding
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy){
            return dp[i][buy]=max(solve(prices,i+1,0)-prices[i],solve(prices,i+1,1));
        }
        return dp[i][buy]=max(solve(prices,i+2,1)+prices[i],solve(prices,i+1,0));
        
    }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        dp.resize(n+1,vector<int>(2,-1));
        return solve(prices,0,1);
    }
};
int main()
{
    return 0;
}