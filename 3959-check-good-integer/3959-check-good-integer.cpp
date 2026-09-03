class Solution {
public:
    
    bool checkGoodInteger(int n) {
       int sum =0; int ssum =0;
       
        while(n>0){
            int digit = n % 10;
            sum += digit;
            ssum += digit*digit;
            n /= 10;
        } 
        return ssum-sum >= 50;
    
        
    }
};