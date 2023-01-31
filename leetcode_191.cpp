class Solution {
public:
    int hammingWeight(uint32_t n) {
        int s=bitset<32>(n).count();
        return s;
    }
};