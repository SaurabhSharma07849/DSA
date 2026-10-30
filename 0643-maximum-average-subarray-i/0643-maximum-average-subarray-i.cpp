
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_avg = INT_MIN;
        int n = nums.size();
        double sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        max_avg = sum / k;

        for(int i = 1; i <= n-k; i++) {
            sum = sum - nums[i-1] + nums[i+k-1];

            double avg = sum / k;
            max_avg = max(max_avg, avg);
        }

        return max_avg;
    }
};
