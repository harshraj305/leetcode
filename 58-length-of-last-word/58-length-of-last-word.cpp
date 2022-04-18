class Solution {
public:
    int lengthOfLastWord(string s) {
        
        if (s.size() == 1) {
            return 1;
        }
        
        int i = s.size()-1;
        int count = 0;
        for (int i=s.size()-1; i>=0; i--) {
            if ( s[i] != ' ') {
                count++;
            }
            if (count > 0 && s[i] == ' ') {
                break;
            }
            
        }
        return count;
    }
};