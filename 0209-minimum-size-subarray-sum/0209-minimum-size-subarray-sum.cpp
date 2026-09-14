class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int sum =0;
        int left=0;
        for(int right = 0; right<nums.size();right++){
            sum += nums[right];
            while(sum >= target){
                int len = right - left +1;
                ans = min(ans,len);
                sum -= nums[left];
                left++;
            }
        }
    return ans == INT_MAX? 0:ans;    
    }
};