#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool solve(vector<vector<char>>&board,string &word,int i,int j,int w,int n,int m){
        if(w==word.size()) return true;
        if(i==n or j == m or i<0 or j<0 or board[i][j]!= word[w]){
            return false;
        }
        board[i][j]='#';
        //going to right
        bool a = solve(board,word,i-1,j,w+1,n,m);
        //going down
        bool b = solve(board,word,i+1,j,w+1,n,m);
        //going left
        bool c=solve(board,word,i,j-1,w+1,n,m);
        //going up
        bool d= solve(board,word,i,j+1,w+1,n,m);
        board[i][j]=word[w];
        return (a || b || c || d);

    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word.size()==0) return false;
        int n=board.size(),m=board[0].size();
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==word[0]){
                    if(solve(board,word,i,j,0,n,m)) return true;
                }
            }
        }
        return false;
    }
};