#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
    int sum=0;
    if(num<10){
        return num;
    }
    while (num)
    {
        sum=sum+num%10;
        num=num/10;
    }
    return addDigits(sum);
    }
};
