#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob2(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,0);
        if(nums.size()==1) return nums[0];
        dp[1]=nums[0];
        dp[2]=max(nums[0],nums[1]);
        for(int i=3;i<=n;i++){
            dp[i]=max(dp[i-2]+nums[i-1],dp[i-1]);
        }
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>v2(nums.begin(),nums.end()-1);
        vector<int>v1(nums.begin()+1,nums.end());
        int s1=rob2(v1);
        int s2=rob2(v2);
        return max(s1,s2);
    }
};
int main()
{
    return 0;
}