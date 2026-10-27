class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int left=1;
        int right=num;
        while(left<=right){
            int mid=left+(right-left)/2;
            long long squar=1LL*mid*mid;
            if(squar==num){
                return true;
            }
            else if(squar<num){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return false;
        
    }
};