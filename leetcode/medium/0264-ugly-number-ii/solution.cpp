class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);
        ugly[0] = 1;
        int prime2 = 0, prime3 = 0, prime5 = 0;

        for (int i = 1; i < n; i++) {
            int next2 = ugly[prime2] * 2;
            int next3 = ugly[prime3] * 3;
            int next5 = ugly[prime5] * 5;
            int nextUgly = min({next2, next3, next5});
            ugly[i] = nextUgly;
            if (nextUgly == next2) prime2++;
            if (nextUgly == next3) prime3++;
            if (nextUgly == next5) prime5++;
        }
        return ugly[n-1];
    }
};