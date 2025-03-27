class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // each element in num is between 0 and n so can be treated like value for next position in arr.
        int s = nums[0];
        int f=  nums[0];
        do{
            s = nums[s];
            f = nums[nums[f]];
        }while(s!=f);

        // cycle detected and both are at the position pointed to by two different array elements
        // now move slow-pointer to start and increment both pointers by one place till they meet again.
        s = nums[0];
        while(s!=f){
            s = nums[s];
            f = nums[f];
        }
        return s;
    }
};
