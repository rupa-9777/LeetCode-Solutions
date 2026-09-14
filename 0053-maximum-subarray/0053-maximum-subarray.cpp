class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long max=LLONG_MIN;
        long long sum =0;
        for(int right=0;right < n;right++){
            sum+=nums[right];
            if(sum>max){
                max =sum;
            }
            if(sum<0){
                sum =0;
            }
        }
    return max;   
    }
};