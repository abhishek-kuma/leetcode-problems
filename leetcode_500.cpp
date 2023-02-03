#include<bits/stdc++.h>
using namespace std;
vector<string> findWords(vector<string>& words) {
    unordered_set<char> row1={'q','w','e','r','t','y','u','i','o','p'};
    unordered_set<char> row2={'a','s','d','f','g','h','j','k','l'};
    unordered_set<char> row3={'z','x','c','v','b','n','m'};
    vector<string> solutions;
    for(auto x:words){
        int row1_count=0,row2_count=0,row3_count=0;
        for(char c:x){
            if(row1.find(c)!=row1.end()){
                row1_count++;
            }
            if (row2.find(c)!=row2.end())
            {
                row2_count++;
            }
            if(row3.find(c)!=row3.end()){
                row3_count++;
            }
        }
        
        bool a=false;
        bool b=false;
        bool c=false;
        if(row1_count==0)
        a=true;
        if(row2_count==0)
        b=true;
        if(row3_count==0)
        c=true;
        if(a&(b^c)|((!a)&b&c)){
            solutions.push_back(x);
        }
    }
    return solutions;
}