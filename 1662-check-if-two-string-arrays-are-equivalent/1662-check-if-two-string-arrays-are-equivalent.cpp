#include <cstring>
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a, b;
        for(auto ch: word1) { a += ch; }
        for(auto ch: word2) { b += ch; }
        // return a == b;
        if(!a.compare(b)) { return true; }
        return false;
    }
};