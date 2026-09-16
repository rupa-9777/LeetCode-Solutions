class Solution {
public:
     bool isVowel(char c){
            return c== 'a'|| c=='e'|| c == 'i' || c == 'o' || c== 'u' || c == 'A' || c == 'E'|| c == 'I' || c == 'O' || c == 'U';
    }
    bool halvesAreAlike(string s) {
        int n=s.size();
       
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n/2;i++){
            if(isVowel(s[i])){
                cnt1++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(isVowel(s[i])){
                cnt2++;
            }
        }
    return cnt1 == cnt2;    
    }
};