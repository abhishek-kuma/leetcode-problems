#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        //New approach
        int count=0;
        int spaces=0;
        for (int  i = 0; i < s.length(); i++)
        {
            if (s[i]==' ')
            {
                spaces++;
            }
            else
            spaces=0;

        }
        for (int  i = 0; i < s.length()-spaces; i++)
        {
            if (s[i]!=' ')
            {
                count++;
            }
            else
            count=0;

        }
        return count;
        
        
    }
};
int main()
{   Solution so;
    string s = "I love football from      childhood   ";
    cout<<so.lengthOfLastWord(s);
    return 0;
}