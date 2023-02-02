#include<bits/stdc++.h>
using namespace std;
int maximumCount(vector<int>& nums) {
    int lo=0;
    int hi=nums.size()-1;
    int mid=lo+(hi-lo)/2;
    if(nums[0]>0){
        return nums.size();
    }
    if(nums[nums.size()-1]<0){
        return nums.size();
    }
    //checking the negative numbers in the array
    int negative=0;
    int postitive=0;
    while (hi-lo>1)
    {
        mid=lo+(hi-lo)/2;
        if(nums[mid]>=0){
            hi=mid-1;
        }
        else{
            lo=mid;
        }
    }
    if(nums[hi]<0){
        negative=hi+1;
    }
    else if(nums[lo]<0){
        negative=lo+1;
    }
    //checking the positive numberts in the array
    lo=0;
    hi=nums.size()-1;
     mid=lo+(hi-lo)/2;
    while (hi-lo>1)
    {
        mid=lo+(hi-lo)/2;
        if(nums[mid]<=0){
            lo=mid+1;
        }

        else{
            hi=mid;
        }
    }
    if(nums[lo]>0){
        postitive=nums.size()-lo;
    }
    else if(nums[hi]>0){
        postitive=nums.size()-hi;
    }
    return(max(negative,postitive));
}
int main(){
    vector<int> arr={-3,-2,-1,0,0,1,2};
    cout<<
    return 0;
}