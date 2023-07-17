#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dp;
    bool help(int i,string &s,unordered_set<string> & st){
        if(i==s.size()) return 1;
        if(dp[i]!=-1) return dp[i];
        string temp;
        for(int j=i;j<s.size();j++){
            temp=temp+s[j];
            if(st.find(temp)!=st.end() and help(j+1,s,st)){
                return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        dp.resize(n+1,-1);
        unordered_set<string> st;
        for(auto str:wordDict) st.insert(str);
        return help(0,s,st);

    }
};
int main()
{
    return 0;
}