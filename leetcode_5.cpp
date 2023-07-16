#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        vector<vector<int>> dp(n+1,vector<int>(n,0));
        //initaialsiation
        int i=0,j=0;
        while(i<n and j<n){
            dp[i][j]=1;
            i++;
            j++;}
        i=0;
        j=i+1;
        int a=0,b=0;
        while(i<n and j<n){
            if(s[i]==s[j]){
                dp[i][j]=1;
                b=j;
                a=i;}
            else dp[i][j]=0;
            i=i+1;
            j=i+1;
        }
        //interating diagonally
        for(int y=2;y<n;y++){
        i=0;
        j=y+i;
        while(i<n and j<n){
            if(i!=j and s[i]==s[j] and dp[i+1][j-1]==true){
                dp[i][j]=1;
                if((j-i)>=(b-a)){
                    a=i;
                    b=j;
                }}
            else dp[i][j]=false;
            i=i+1;
            j=i+y;
        }
        }
        return s.substr(a,b-a+1);
    }
};
int main()
{
    return 0;
}