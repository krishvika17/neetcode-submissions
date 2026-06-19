class Solution {
public:
    string gcdOfStrings(string str1,string str2) {
        int l1 = str1.length();
        int l2 = str2.length();
        
        // Find the length of the smaller string
        int min_len = (l1 < l2) ? l1 : l2;
        int max_len = 0; // Tracks the largest valid length found
        
        // Loop from 1 up to the smaller string's length
        for (int len = 1; len <= min_len; len++) {
            
            // 1. First, check if this length can even divide both strings evenly
            if (l1 % len == 0 && l2 % len == 0) {
                
                // Get the candidate substring from the beginning
                string sub = str1.substr(0, len);
                
                // 2. See if repeating this substring forms str1 and str2
                bool matches = true;
                
                // Check if it matches across str1
                for (int i = 0; i < l1; i++) {
                    if (str1[i] != sub[i % len]) {
                        matches = false;
                        break;
                    }
                }
                
                // Check if it matches across str2
                for (int j = 0; j < l2; j++) {
                    if (str2[j] != sub[j % len]) {
                        matches = false;
                        break;
                    }
                }
                
                // 3. If it successfully repeats, update our maximum length
                if (matches == true) {
                    max_len = len;
                }
            }
        }
        
        // Return the final maximum length substring found
        return str1.substr(0, max_len);
    }
};