class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int i = 0;
        int j = 0;
        int size = INT_MAX;
        while (j < nums.size()) {
            sum += nums[j];
            while(sum >= target) {
             int  curr_size = j - i + 1;
                   size=min(size,curr_size);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(size==INT_MAX) return 0;
        return size;
    
}
};