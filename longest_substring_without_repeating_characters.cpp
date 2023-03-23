#include<vector>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::vector<int> chars(256, -1);
        int start = -1;
        int maxLen = 0;
        for(int i = 0; i < s.size();i++)
        {
            if(chars[s[i]] > start)
            {
                start = chars[s[i]];
            }
            chars[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};