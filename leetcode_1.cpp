#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> index;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }
            }
        }
        return index;
        
    }
};
int main()
{
    Solution s;
    int target=9;
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    cout<<nums.size();
    s.twoSum(nums,target);
    


    return 0;
}
