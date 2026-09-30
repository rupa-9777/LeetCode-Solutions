class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i =0;
        int j=piles.size()-1;
        int k = j-1;
        int sum =0;
        while(i<k){
            sum += piles[k];
            j-=2;
            k-=2;
            i++;
        }
        return sum;
    }
};