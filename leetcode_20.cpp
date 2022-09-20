#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> v = {'1'};
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                v.push_back(s[i]);
            }
            if(s[i]=='{'){
                v.push_back(s[i]);
            }
            if(s[i]=='['){
                v.push_back(s[i]);
            }
            else
            {
                if (s[i] == ')')
                {
                    if (v[v.size()-1] != '(')
                    {
                        return false;
                    }
                    else
                        v.pop_back();
                }
                else if (s[i] == '}')
                {
                    if (v[v.size()-1] != '{')
                    {
                        return false;
                    }
                    else
                        v.pop_back();
                }
                else if (s[i] == ']')
                {
                    if (v[v.size()-1] != '[')
                    {
                        return false;
                    }
                    else
                        v.pop_back();
                }
            }
        }
        if (v[v.size() - 1] == '1')
        {
            return true;
        }
        return false;
    }};

    int main()
    {
        Solution s;
        string st="()[]{}";
        cout<<s.isValid(st);
        return 0;
    }