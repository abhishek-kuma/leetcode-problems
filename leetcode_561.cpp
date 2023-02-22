class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxsum=0;
        for(int i=0;i<nums.size()-1;i++){
            maxsum=maxsum+min(nums[i],nums[i+1]);
            i++;
        }
        return maxsum;
    }
};
