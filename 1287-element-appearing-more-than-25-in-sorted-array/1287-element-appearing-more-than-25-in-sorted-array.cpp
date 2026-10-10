class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map <int,int> freq;
        for(int x: arr){
            freq[x]++;
        }
        for(auto it : freq){
            if(it.second > arr.size()/4){
                return it.first;
            }
        }
    return {};
    }
};