class Solution {
public:
    void bring(int ind, string one, vector<string>&ans, string options[], string digits) {
        if(ind == digits.length()) {
            ans.push_back(one);
            return ;
        }
        int number = digits[ind] - '0';
        string value = options[number];
        for(int i = 0; i < value.length(); i++) {
            one.push_back(value[i]);
            bring(ind + 1, one, ans, options, digits);
            one.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0) { return ans; }
        string one;
        string options[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        bring(0, one, ans, options, digits);
        return ans;
    }
};