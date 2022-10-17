class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[128] = {0};
        
        for(int i = 0; sentence[i] != '\0'; i++) { freq[sentence[i]]++; }
        
        for(int i = 97; i <= 122; i++) {
            if(freq[i] == 0 ) { return false; }
        }
        
        return true;
    }
};