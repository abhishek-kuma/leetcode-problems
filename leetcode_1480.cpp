// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

 

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
//Leetcode 1480
// Constraints:

// 1 <= nums.length <= 1000
// -10^6 <= nums[i] <= 10^6
#include<bits/stdc++.h>
using namespace std;
//The Below Function Can be used for Printing of a vector
void PrintVec(vector<int>&nums){
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
vector<int> runningSum(vector<int>& nums) {
    vector<int> ans;
    int temp=0;
    for (int i = 0; i < nums.size(); i++)
    {
        temp=nums[i]+temp;
        ans.push_back(temp);
    }
    return ans;
    
}
int main(){

}