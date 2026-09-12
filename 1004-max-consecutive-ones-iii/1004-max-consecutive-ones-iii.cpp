class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left =0;
        int zeroCount=0;
        for(int j =0;j<n;j++){
           if(nums[j]==0){
            zeroCount++;
           }
           if(zeroCount >k){
             if(nums[left]==0){
              zeroCount--;
             }
            left++;
           }
        }
    return n-left;   
    }
};