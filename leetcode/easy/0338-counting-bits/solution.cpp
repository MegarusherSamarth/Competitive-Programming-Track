class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result (n+1);
        for (int i=0; i<=n; ++i){
            result[i] = bitset<32>(i).count();
        }
        return result;
    }
};