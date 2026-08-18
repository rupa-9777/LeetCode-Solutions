class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index = -1;
        int largest = INT_MIN;
        int slargest = INT_MIN;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>largest){
                slargest = largest;
                largest = nums[i];
                index = i;
            }else if(nums[i]> slargest && nums[i]!=largest){
                slargest = nums[i];
            }
        }
        if(largest >= 2*slargest){
            return index;
        }
     return -1;   
    }
};