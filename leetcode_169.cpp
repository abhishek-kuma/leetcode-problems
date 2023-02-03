#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    unordered_map<int,int> m;
    for(int x:nums){
        m[x]++;
    }
    int max=INT_MIN;
    pair <int,int> it;
    int num;
for (auto i : m){
    if(i.second>max){
        num=i.first;
    }
}
    return num;
}