class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // sanity check
        if(k<=0 || nums.empty()){
            return {};
        }
        
        vector<int> result;
        deque<int> indx_dq;
        for(int i=0; i<nums.size(); ++i){
            if(!indx_dq.empty() && i-k>=indx_dq.front()){
                indx_dq.pop_front();
            }
            while(!indx_dq.empty() && nums[indx_dq.back()] <= nums[i]){
                indx_dq.pop_back();
            }
            indx_dq.push_back(i);
            if(i>=k-1){
                result.push_back(nums[indx_dq.front()]);
            }
        }
        return result;
    }
};
