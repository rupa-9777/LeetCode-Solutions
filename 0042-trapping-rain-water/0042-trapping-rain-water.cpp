class Solution {
public:
    int trap(vector<int>& height) {
        int left =0;
        int right = height.size()-1;
        int maxleft=height[left];
        int maxRight =height[right];
        int water=0;
        while(left < right){
           if(maxleft < maxRight){
            left++;
            maxleft = max(maxleft ,height[left]);
            water += maxleft - height[left];
           }else{
            right--;
            maxRight = max(maxRight ,height[right]);
            water += maxRight - height[right];
           }
        }
    return water;    
    }
};