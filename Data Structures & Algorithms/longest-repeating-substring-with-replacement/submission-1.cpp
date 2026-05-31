class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int max_len=0;
        int hash[26]={0};
        int max_f=0;
        int l=0;

        for (int r=0;r<n;r++){
            hash[s[r]-'A']++;
            max_f=max(max_f,hash[s[r]-'A']);
            int changes=r-l+1-(max_f);//changes are length of current substring -max_freq element in that substring
            if (changes<=k){
                max_len=max(max_len,r-l+1);
            }
            else{//can use here while loop as well . since we are interested in max_len and r increases by atmost 1 in each iteration so both are correct(lazy window)- instead of o(2n) we get o(n) 
                max_f=0;//very imp otherwise when you scan the hash array max_f still remains the previous value even after shrinking window so update max_f=0 in every iteration whenever an element is removed
                hash[s[l]-'A']--;
                for (int z=0;z<26;z++){
                    max_f=max(max_f,hash[z]);//o(26)
                }
                l++;
            }
        }

        return max_len;
    }
};
