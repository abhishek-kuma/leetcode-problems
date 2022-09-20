#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]!=9){
        digits[digits.size()-1]++;
        return digits;}
        else{
        int value=1;
        for (int i = 0; i < digits.size(); i++)
        {
            if(digits[i]!=9){
                value=0;
            }
        }
            if (value)
            {
                for (int i = 0; i < digits.size(); i++)
                {
                    digits[i]=0;
                }
                digits[0]=1;
                digits.push_back(0);
                return digits;
            }
            digits[digits.size()-1]++;
            for (int i = digits.size()-1; i > 0 ; i--)
            {
                if(digits[i]==10){
                    digits[i]=0;
                    digits[i-1]++;
                }
            }
            return digits;

        }
    }
};
int main()
{
    Solution s;
    vector <int> digits={9,9};
    cout<<"INPUT :";
    for (int i = 0; i < digits.size(); i++)
    {
        cout<<digits[i]<<" ";
    }
    cout<<endl;
    s.plusOne(digits);
    
    for (int i = 0; i < digits.size(); i++)
    {
        cout<<digits[i]<<" ";
    }
    return 0;
}