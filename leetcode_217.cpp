#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,bool> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if(map[nums[i]]){
            return true;
        }
        map[nums[i]]=true;
    }
    return false;
    
}