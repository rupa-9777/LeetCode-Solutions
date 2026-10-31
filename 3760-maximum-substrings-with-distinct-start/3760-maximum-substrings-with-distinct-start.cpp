class Solution {
public:
    int maxDistinct(string s) {
        unordered_set <char> sett;
        for(int a =0;a<s.size();a++){
          sett.insert(s[a]);
        }
        int cnt =0;
        for(char ch : sett){
            cnt++;
        }
    return cnt;
    }
};