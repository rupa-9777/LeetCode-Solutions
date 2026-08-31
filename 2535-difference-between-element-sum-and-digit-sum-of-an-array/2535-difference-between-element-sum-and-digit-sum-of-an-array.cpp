class Solution {
public:
    int sum(int num){
        int sum=0;
        while(num>0){
            int digit = num% 10;
            sum += digit;
            num /= 10;
        }
    return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            sum1 += nums[i];
            sum2 += sum(nums[i]);
        }
        return sum1-sum2;
        
    }
};