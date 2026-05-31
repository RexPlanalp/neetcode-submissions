class Solution {
   public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t n{nums.size()};

        vector<int> result(2 * n);

        for (size_t idx{0}; idx < n; ++idx) {
            result[idx] = result[idx + n] = nums[idx];
        }

        return result;
    }
};