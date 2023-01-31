#include<bits/stdc++.h>
using namespace std;
vector<string> readBinaryWatch(int turnedOn) {
    vector<string> solution;
    string s;
    for(int hours=0;hours<12;hours++){
        for (int min = 0; min < 60; min++)
        {
            if(tobinary(hours)+tobinary(min)==turnedOn){
                s.clear();
                s=s+to_string(hours);
                s.push_back(':');
                if(min<10){
                    s.push_back('0');
                }
                s=s+to_string(min);
                solution.push_back(s);
            }
        }
        
    }
    return solution;
}
int tobinary(int n){
    //make a function that returns the count of 1 in its binaray form
    int s=bitset<6>(n).count();
    return s;
}