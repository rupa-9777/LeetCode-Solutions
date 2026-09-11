class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int ans = 0;

        for(int num = 100; num <= 998; num += 2) {
            int x = num;
            int freq[10] = {0};

            while(x > 0) {
                freq[x % 10]++;
                x /= 10;
            }

            int available[10] = {0};

            for(int d : digits)
                available[d]++;

            bool possible = true;

            for(int i = 0; i < 10; i++) {
                if(freq[i] > available[i]) {
                    possible = false;
                    break;
                }
            }

            if(possible)
                ans++;
        }

        return ans;
    }
};