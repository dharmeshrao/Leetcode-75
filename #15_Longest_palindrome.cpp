// Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.
// Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

// Example 1:
// Input: s = "abccccdd"
// Output: 7
// Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
// Example 2:
// Input: s = "a"
// Output: 1
// Explanation: The longest palindrome that can be built is "a", whose length is 1.


class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>map;
        bool flag = false;
        int resultCount = 0;
        for(char x: s)map[x]++;
        
        for(auto& y : map){
            if(y.second % 2 == 0)resultCount += y.second;
            else {
                flag = true;
                resultCount += y.second - 1;
            }
        }
        if(flag)resultCount++;
        
        return resultCount;
    }
};