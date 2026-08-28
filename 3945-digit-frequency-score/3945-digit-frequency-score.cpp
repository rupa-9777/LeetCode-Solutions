class Solution {
public:
    int digitFrequencyScore(int n) {
        int freq[10] = {};

        while(n > 0) {
            int digit = n % 10;
            freq[digit]++;
            n = n / 10;
        }

        int ans = 0;

        for(int d = 0; d <= 9; d++) {
            ans += d * freq[d];
        }

        return ans;
    }
};