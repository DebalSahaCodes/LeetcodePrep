class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // first k nums sum
        int loc_sum=0;
        for(int i=0; i<k; ++i){
            loc_sum += nums[i];
        }
        int max_sum = loc_sum;
        for(int i=k; i < nums.size(); ++i){
            loc_sum += nums[i] - nums[i-k];
            max_sum = std::max(max_sum, loc_sum);
        }
        return static_cast<double>(max_sum)/k;
    }
};
