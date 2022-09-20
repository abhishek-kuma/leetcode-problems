#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid=low+(high-low)/2;
        if(nums[nums.size()-1]<target){
            return nums.size();
        }
        for(int i=0;i<nums.size();i++)
        {
            
            if (nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if (nums[mid]>target)
            {
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return mid;
    }
};
int main()
{
    vector <int> nums={1,3,5,6};
    Solution s;
    cout<<s.searchInsert(nums,7);
    return 0;
}