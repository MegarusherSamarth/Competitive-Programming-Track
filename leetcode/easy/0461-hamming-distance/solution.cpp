class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = x ^ y;
        int dis = 0;
        while (result != 0){
            dis += result & 1;
            result >>= 1;
        }
        return dis;
    }
};