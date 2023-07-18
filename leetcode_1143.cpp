#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int lcs(int x, int y, string &text1, string &text2,vector<vector<int>> &dp){
         if(dp[x][y]!=-1) return dp[x][y];
          if(x==0 || y==0){
            return dp[x][y]=0;
        }
         
        if(text1[x-1]==text2[y-1]){
            return dp[x][y]=1+lcs(x-1,y-1,text1,text2,dp);
        }
        else{
            return dp[x][y]=max(lcs(x-1,y,text1,text2,dp),lcs(x,y-1,text1,text2,dp));
        }
        return 0;
    }
    int longestCommonSubsequence(string text1, string text2) {
        
          int x=text1.length();
          int y=text2.length();
          vector<vector<int>> dp(x+1,vector<int>(y+1,-1));
      
            int ans = lcs(x,y,text1,text2,dp);
            return ans;
    }
};
int main()
{
    return 0;
}