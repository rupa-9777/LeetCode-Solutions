class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set;
        for(int num:nums1){
            set.insert(num);
        }
        unordered_set <int> result;
        for(int num : nums2){
            if(set.find(num)!=set.end()){
                result.insert(num);
            }
        }
        vector <int> ans;
        for(int num:result){
            ans.push_back(num);
        }
    return ans;
    }
};