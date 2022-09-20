#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lower=0,high=nums.size()-1;
        while (lower<=high)
        {
            int m=(lower+high)/2;
            if(nums[m]==target) return m;
            else if(nums[lower]<=nums[m]){
                if(nums[lower]<=target and target<= nums[m]){
                    high=m-1;
                }
                else
                lower=m+1;

            }
            else{
                if(nums[m]<=target and target<=nums[high])
                lower=m+1;
                else
                high=m-1;
            }
    }
    return -1;
};
int main()
{
    return 0;
} 