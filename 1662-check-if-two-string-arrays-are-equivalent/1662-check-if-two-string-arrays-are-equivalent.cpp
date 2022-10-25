#include <cstring>
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a, b;
        for(auto ch: word1) { a += ch; }
        for(auto ch: word2) { b += ch; }
        // if((strcmp(a, b)) == 0) { return true; }
        // return false;
        return a == b;
    }
};