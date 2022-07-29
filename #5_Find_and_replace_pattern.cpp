// Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.
// A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.
// Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

// Example 1:

// Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
// Output: ["mee","aqq"]
// Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
// "ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.
// Example 2:
// Input: words = ["a","b","c"], pattern = "a"
// Output: ["a","b","c"]

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;  
      for(int j = 0;j < words.size();j++){
        unordered_map<char, char> umap;
        unordered_map<char, bool> bmap;
          string s = words[j];
          bool flag = true;
          if(s.size() != pattern.size()){
              flag = false;
              continue;
          }
        for(int i = 0;i< s.size();i++){
            if(bmap[pattern[i]] && umap[s[i]] != pattern[i]){
                flag = false;
            }
            else if(umap[s[i]]){
                if(!bmap[pattern[i]])flag = false;
            }
            else if(!bmap[pattern[i]] && !umap[s[i]]){
                bmap[pattern[i]] = true;
                umap[s[i]] = pattern[i];
            }
            else {
                flag = false;
            }
        }
          if(flag){
              ans.push_back(words[j]);
          }
      }
        return ans;
    }
};


