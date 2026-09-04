class Solution {
public:
    int signFunc(int x){
        if(x>=1){
            return 1;
        }else if(x<0){
            return -1;
        }else{
            return 0;
        }
    }
    int arraySign(vector<int>& nums) {
        int pro=1;
        for(int i=0;i<nums.size();i++){
            pro *= signFunc(nums[i]);
        }
    return signFunc(pro);   
    }
};