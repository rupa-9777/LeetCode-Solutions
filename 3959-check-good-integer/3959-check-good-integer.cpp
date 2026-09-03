class Solution {
public:
    int Sum(int n){
        int sum = 0;
        while(n>0){
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }
    return sum;
    }
    int SSum(int n){
        int sum = 0;
        while(n>0){
            int digit = n % 10;
            sum += digit*digit;
            n /= 10;
        }
    return sum;
    }
    bool checkGoodInteger(int n) {
        
        return SSum(n) - Sum(n) >= 50;
    
        
    }
};