class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int max_len=0;

        for (int i=0;i<n;i++){
            int hash[26]={0};
            int max_f=0;
            for (int j=i;j<n;j++){
                hash[s[j]-'A']++;
                max_f=max(max_f,hash[s[j]-'A']);
                int changes=j-i+1-(max_f);//changes are length of current substring -max_freq element in that substring
                if (changes<=k){
                    max_len=max(max_len,j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return max_len;
    }
};
