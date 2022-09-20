#include <iostream>
#include <bits/stdc++.h>
//returning third distinct maximum value of an vector
using namespace std;
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if(nums[i]==nums[j]){
                    return true;
                }
            }
            
        }
        return false;
        
        
    }
};
int main()
{
    Solution s;
    vector <int> nums={3,2,1};
    cout<<s.containsDuplicate(nums);

    return 0;
}