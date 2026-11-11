class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        long long low=0;
        long long high=n-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*(mid+1)/2<=n){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return high;

    }
};