class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map <int,string> fre;
        for(int i=0;i<heights.size();i++){
            fre[heights[i]] = names[i];
        }
        sort(heights.begin(),heights.end(),greater<int>());
        vector<string> ans;
        for(int num : heights){
            ans.push_back(fre[num]);
        }
    return ans;
    }
};