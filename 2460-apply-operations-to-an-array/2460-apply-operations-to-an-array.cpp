class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector <int> ans;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i]= nums[i]*2;
                nums[i+1]=0;
            }
            ans.push_back(nums[i]);
        }
        ans.push_back(nums[nums.size()-1]);
            int j=0;
            for(int i=0;i<ans.size();i++){
                if(ans[i]!=0){
                    swap(ans[j],ans[i]);
                    j++;
                }
            } 
        
    return ans;
    }
};