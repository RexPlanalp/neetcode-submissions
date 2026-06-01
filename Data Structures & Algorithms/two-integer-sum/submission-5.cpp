class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> passed_nums{};
        for (int idx{}; idx < nums.size(); ++idx) {
            if (passed_nums.count(target - nums[idx])) {
                return {passed_nums[target - nums[idx]], idx};
            }
            passed_nums[nums[idx]] = idx;
        }
        return {};
    }
};
