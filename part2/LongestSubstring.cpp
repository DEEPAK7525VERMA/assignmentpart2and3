#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charMap;
        int maxLength = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); right++) {
            char currentChar = s[right];
            
            // If character exists in map and is inside our current window
            if (charMap.count(currentChar) && charMap[currentChar] >= left) {
                left = charMap[currentChar] + 1;
            }
            
            charMap[currentChar] = right;
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};

int main() {
    Solution sol;
    string s = "abcabcbb";
    cout << "Input: " << s << endl;
    cout << "Output: " << sol.lengthOfLongestSubstring(s) << endl;
    return 0;
}