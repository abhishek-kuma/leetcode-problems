#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN;
        int index_max = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                index_max=i;

            }
        }
        for(int i=0;i<nums.size();i++){
            if(i!=index_max){
                if(nums[i]*2>max)
                {return -1;}
            }
        }
        return index_max;

    }
};