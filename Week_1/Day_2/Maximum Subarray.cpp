class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        double sum = 0;
        double maxi = INT_MIN;

        for(j = 0; j < k; j++) {
            sum += nums[j];
        }

        maxi = max(maxi, sum / k);

        while(j < nums.size()) {
            sum += nums[j];
            sum -= nums[i];

            maxi = max(maxi, sum / k);

            i++;
            j++;
        }

        return maxi;
    }
};
