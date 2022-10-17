class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        
        for(char ch: sentence) { arr[ch - 'a']++; }
        
        for(int i = 0; i < 26; i++) {
            if(arr[i] == 0) { return false; }
        }
        
        return true;
    }
};


// class Solution {
// public:
//     bool checkIfPangram(string sentence) {
//         int freq[128] = {0};
        
//         for(int i = 0; sentence[i] != '\0'; i++) { freq[sentence[i]]++; }
        
//         for(int i = 97; i <= 122; i++) {
//             if(freq[i] == 0 ) { return false; }
//         }
        
//         return true;
//     }
// };


// Future reference:  https://leetcode.com/problems/check-if-the-sentence-is-pangram/discuss/1380853/Easy-3-approaches-with-explanation-or-C%2B%2B-or-100-time-or-One-liner