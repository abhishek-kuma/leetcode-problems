#include<bits/stdc++.h>
using namespace std;
int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int count=0;
    bool check=false;
    for (int i = 0; i < arr1.size(); i++)
    {
        check=false;
        for (int j = 0; j < arr2.size(); j++)
        {
            if(abs(arr1[i]-arr2[j])<=d){
                check=true;
            }
        }
        if(check==false){
            count++;
        }
        
    }
    return count;
    
}
int main(){
    return 0;
}
