class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> unique_nums{};
        for (const auto& num: nums) {
            if (unique_nums.contains(num))
                return true;
            unique_nums.insert(num);
        }

        return false;
    }
};