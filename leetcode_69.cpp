#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        long end = x;
        long start = 0;
        long mid;
        while (start +1 < end)
        {
            mid = start + (end - start) / 2;
            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid < x)
            {
                start == mid;
            }
            else if (mid * mid > x)
            {
                end = mid;
            }
        }
        if (end * end == x)
        {
            return mid;
        }
        return start;
    }
};
int main()
{
    Solution s;
    cout << s.mySqrt(8);
    return 0;
}