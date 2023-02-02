#include<bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int ,int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        auto it=map.find(nums[i]);

        if((it!=map.end())&&(it->first==nums[i])){
            if(abs((it->second)-i)<=k){
                return true;
            }
        }
        map[nums[i]]=i;

    }
    return false;
    
}