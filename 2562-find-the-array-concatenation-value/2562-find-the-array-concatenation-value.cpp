class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans =0;
        int l=0;
        int r = nums.size()-1;
        while(l< r){
            string s = to_string(nums[l]) + to_string(nums[r]);
            ans += stoll(s);
            l++;
            r--;
        }
        if(l==r){
            ans += nums[l];
        }
    return ans;
    }
};