#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
        string removeDuplicates(string s) {
       stack<char> st;
        char ch;
        for (int i = 0; i < s.size(); i++)
        {
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string res;
        while (!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
int main()
{
    string s="abbaca";
    return 0;
}