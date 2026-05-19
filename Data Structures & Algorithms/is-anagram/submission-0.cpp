class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int m=s.length();
        int n=t.length();
        if (m!=n){
            return false;
        }
        else{
            for (int i=0;i<m;i++){
                if (s[i]!=t[i]){
                    return false;
                }
                
            }
            return true ;
        }
    }
};
