class Solution {
public:
    
    bool prime(int n){
       if(n<2){
        return false;
       }
       for(int i=2; i*i <=n;i++){
        if(n % i == 0){
            return false;
        }
       }
    return true;

    }
    int sumOfPrimesInRange(int n) {
        int rev =0;
        int original = n;
        while(n>0){
            int digit = n % 10;
            rev = rev * 10 +digit;
            n/=10;
        }
        int mini = min(original,rev);
        int maxi=max(original,rev);
        int sum =0;
        for(int i = mini ;i<= maxi;i++){
            if(prime(i)==true){
                sum += i;
            }
        }
        return sum;
    }
};