class Solution {
public:
    int mirrorReflection(int p, int q) {
        int g = gcd(p, q);
        int k = p / g;
        p /= g;
        q /= g;

        if (k % 2 == 0) return 2;
        if (q % 2 == 0) return 0;
        return 1;
    }
};