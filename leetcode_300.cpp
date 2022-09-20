#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int lengthofLISFromIndex(vector <int> nums,int startindex){
    if(startindex==nums.size()-1){
        return 1;
    }
    int max=1;
    int length;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[startindex]<nums[i]){
            cout<<"Going into function\n";
            length=1+lengthofLISFromIndex(nums,i);
        }
        if(length>max){
            max=length;
        }
    }
    return max;
}
int main()
{
    vector <int> nums={2,1,0,3,2,3};
    cout<<lengthofLISFromIndex(nums,0);
    return 0;
}