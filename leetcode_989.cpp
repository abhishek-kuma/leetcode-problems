#include<bits/stdc++.h>
using namespace std;
    vector<int> addToArrayForm(vector<int>& num, int k) {
    vector<int> num2;
    while (k)
    {
        num2.push_back(k%10);
        k=k/10;
    }
    vector<int> solution;
    reverse(num2.begin(),num2.end());
    int i=num.size()-1;
    int j=num2.size()-1;
    int carry=0;
    while (i>=0&&j>=0)
    {
        if((num[i]+num2[j]+carry)>9){
            solution.push_back((num[i]+num2[j]+carry)%10);
            carry=1;
        }
        else{
            solution.push_back(((num[i]+num2[j]+carry)));
            carry=0;
        }
        i--;
        j--;
    }
    if(i>0){
        while (i>=0)
        {
            if((num[i]+carry)>9){
                solution.push_back((num[i]+carry)%10);
                carry=1;
            }
            else{
                solution.push_back((num[i]+carry));
                    carry=0;
                }
                i--;
            }
            
        }
        
    
    else{
        while (j>=0)
        {
            if((num2[j]+carry)>9){
                solution.push_back((num2[j]+carry)%10);
                carry=1;
            }
            else{
                solution.push_back((num2[j]+carry));                    
                carry=0;
                
            }
            j--;
            
        }
        
    }
    if(carry==1){
        solution.push_back(1);
    }
    reverse(solution.begin(),solution.end());
    return solution;
    }

int main()
{
    return 0;
}