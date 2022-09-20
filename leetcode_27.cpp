#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int n=nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]==val)
            {
                count++;
                nums.erase(nums.begin()+i);
                i--;
            }
            
        }
        return (n-count);
    }
};
int main()
{
    vector <int> arr={0,1,2,2,3,0,4,2};
    Solution s;
    cout<<s.removeElement(arr,2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<endl<<arr[i];
    }
    
    return 0;
}