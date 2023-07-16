#include<bits/stdc++.h>
using namespace std;
// recursive approach
// class Solution {
// public:
//     int solve(int i,string &s){
//         if(i<s.size() and s[i]=='0') return 0;
//         if(i==s.size()-1) return 1;
//         if(i==s.size()) return 1;
//         int a=0,b=0;
//         a=solve(i+1,s);
//         if(stoi(s.substr(i,2))<=26) b=solve(i+2,s);
//         return (a+b);
//     }
//     int numDecodings(string s) {
//         if(s[0]=='0') return 0;
//         return solve(0,s);
//     }
// };

// Memoizded approach

// class Solution {
// public:
//     vector<int> dp;
//     int solve(int i,string &s){
//         if(i<s.size() and s[i]=='0') return 0;
//         if(i==s.size()-1) return 1;
//         if(i==s.size()) return 1;


//         if(dp[i+1]==-1 and s[i+1]!=0) dp[i+1]=solve(i+1,s);
//         if(s[i+1]==0) dp[i+1]=0;

//         int x=stoi(s.substr(i,2));
//         if(dp[i+2]==-1 and x>=10 and x<=26) dp[i+2]=solve(i+2,s);
//         if(x>26 or x<10) dp[i+2]=0;


//         return dp[i]=(dp[i+1]+dp[i+2]);
//     }
//     int numDecodings(string s) {
//         dp.resize(s.size()+2,-1);
//         if(s[0]=='0') return 0;
//         return solve(0,s);
//     }
// };

// top down

class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,0);
        if(s[0]=='0') return 0;
        dp[0]=1;
        dp[1]=1;
        //implementation
        for(int i=2;i<=n;i++){
            if(s[i-1]!='0') dp[i]+=dp[i-1];
            int x=stoi(s.substr(i-2,2));
            if(x>=10 and x<=26) dp[i]+=dp[i-2];
        }
        return dp[n];
    }
};
int main()
{
    string s="27";
    Solution sol;
    cout<<sol.numDecodings(s);
    return 0;
}