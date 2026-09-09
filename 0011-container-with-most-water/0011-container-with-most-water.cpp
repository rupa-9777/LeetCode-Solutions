class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea=0;
        int left=0;
        int right=n-1;
        while(left<right){
            int width = right - left;
            int mini = min(height[left],height[right]);
            int area = mini*width;
            maxArea = max(maxArea,area);
            if(height[left]<=height[right]){
                left++;
            }else{
                right--;
            }
        }
    return maxArea;    
    }
};