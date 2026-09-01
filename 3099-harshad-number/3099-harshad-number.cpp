class Solution {
public:
    int sum(int n){
        int sum=0;
        while(n>0){
            int digit = n % 10;
            sum += digit;
            n /=10;
        }
    return sum;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int digitSum = sum(x);
        if(x % digitSum ==0){
            return digitSum;
        }
        return -1;
    }   
    
};