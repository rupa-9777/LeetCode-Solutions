class Solution {
public:
    int cntDigit(int num , int k){
        int cnt=0;
        while(num>0){
            int digit = num % 10;
            if(digit == k){
                cnt++;
            }
            num/=10;
        }
        return cnt;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int sum =0;
        for(int i=0; i<nums.size();i++){
            sum = sum + cntDigit(nums[i],digit);
        }
        return sum;
    }
};