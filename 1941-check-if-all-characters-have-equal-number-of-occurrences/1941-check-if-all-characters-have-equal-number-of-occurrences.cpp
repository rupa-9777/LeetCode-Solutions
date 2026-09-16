class Solution {
public:
    bool areOccurrencesEqual(string s) {
       vector <int> freq(26,0);
       for(char c : s){
        freq[c - 'a']++;
       }
       int first=0;
       for(int i=0;i<26;i++){
        if(freq[i]>0){
            first = freq[i];
        }
       }
       for(int i=0;i<26;i++){
        if(freq[i]>0 && freq[i] != first){
          return false;
        }
       }
    return true;
    }
};