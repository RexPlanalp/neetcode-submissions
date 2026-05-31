class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        array<int, 26> s_frequency{};
        array<int, 26> t_frequency{};

        for (size_t idx{}; idx < s.length(); ++idx) {
            ++s_frequency[s[idx] - 'a'];
            ++t_frequency[t[idx] - 'a'];
        }

        return s_frequency == t_frequency;
    }
};
