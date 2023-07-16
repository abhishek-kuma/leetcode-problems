#include<bits/stdc++.h>
using namespace std;
void vec2print(vector<vector<int>> &dp){
    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            cout<<dp[i][j]<<"\t";
        }
        cout<<endl;
        
    }
    
}
int main(){
    string s="97294";
    cout<<stoi(s)<<endl;
}
//String
// int main()
// {
//     string a="abcdbbfcba";
//     string b;
//     for (int i = a.size()-1; i>=0; i--)
//     {
//         b.push_back(a[i]);
//         /* code */
//     }
//     int n=a.size();
//     vector<vector<int>> dp(n+1,vector<int>(n+1,0));
//     int m=INT_MIN;
//     int p,q;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1 ;j <= n; j++)
//         {
//             if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
//             else dp[i][j]=0;
//             if(dp[i][j]>m){
//                 m=dp[i][j];
//                 p=i;
//                 q=j;
//             }
//         }
        
//     }
//     string ans;
//     cout<<p<<" "<<q<<" "<<m<<endl;
//     while (dp[p][q])
//     {
//         /* code */
//         ans.push_back(a[p-1]);
//         p--;
//         q--;
//     }
//     cout<<ans<<endl;
    
    
//     vec2print(dp);
    
    
//     return 0;
// }