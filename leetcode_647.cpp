#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        vector<vector<bool>> dp(n,vector<bool>(n,0));
        int i=0,j=0;
        while(i<n){
            dp[i][j]=1;
            i++;
            j++;
            count++;
        }
        j=1;
        i=0;
        while(i<n and j<n){
            if(s[i]==s[j]){
                dp[i][j]=1;
                count++;
            }
            i++;
            j=i+1;
        }
        //diagonal iteration
        for(int d=2;d<n;d++){
            i=0;
            j=i+d;
            while(i<n and j<n){
                if(s[i]==s[j] and dp[i+1][j-1]==1){
                    dp[i][j]=1;
                    count++;
                }
                i++;
                j=i+d;
            }
        }
        return count;
    }
};
int main()
{
    return 0;
}