#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        //n is the numbers of digits in that number 
        //k is the difference
        if(k==0){
            vector <int> nums;
            int t=1;
            for(int i=1;i<10;i++){
                int number=i;
                for (int j = 0; j < n-1; j++)
                {
                    number=number*10+i;   
                }
                nums.push_back(number);
            }
            return nums;
        }
        vector <int> cur={0,1,2,3,4,5,6,7,8,9};

        for (int i = 2; i <= n; i++)
        {
            vector <int> cur2;
            for(int x:cur){
                int y=x%10;
                if(x>0&&y+k<10)
                cur2.push_back(x*10+y+k);
                if(x>0&&y-k>=0)
                cur2.push_back(x*10+y-k);
            }
            cur=cur2;
        }
        return cur;
        
    }
};
int main(){
    Solution s;
    vector <int> arr=s.numsSameConsecDiff(2,0);
    for(int x:arr)
    cout<<x<<endl;
}