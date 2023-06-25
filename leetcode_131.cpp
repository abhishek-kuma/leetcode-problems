#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> ans;
    void helper(unordered_map<char,string> &m,string digits,int i,int n,string temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        string s=m[digits[i]];
        for(int j=0;j<s.size();j++){
            temp.push_back(s[j]);
            helper(m,digits,i+1,n,temp);
            temp.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
    if(digits.size()==0) return ans;
    unordered_map<char,string> m;    
    //mapping of each number to a string
    m['2']="abc";
    m['3']="def";
    m['4']="ghi";
    m['5']="jkl";
    m['6']="mno";
    m['7']="pqrs";
    m['8']="tuv";
    m['9']="wxyz";
    string temp;
    helper(m,digits,0,digits.size(),temp);
    return ans;
    }
};