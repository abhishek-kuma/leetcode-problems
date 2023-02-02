#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int ncr(int n,int r){
    if(r>n-r){
        r=n-r;
    }
    int p=1;
    int q=1;
    // if(r!=0){
    while (r)
    {
        p=p*n;
        q=q*r;
        int temp=__gcd(p,q);
        p=p/temp;
        q=q/temp;
        n--;
        r--;
    }
    return p;
}
    vector<int> getRow(int rowIndex) {
        vector<int> arr;
        for(int i=0;i<=rowIndex;i++){
            arr.push_back(ncr(rowIndex,i));
        }
        return arr;
    }
};