class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        int a=s.length();
        for (int y=0;y<a;y++ ){
            if (isalnum(s[y])){
                st+=s[y]; //check alphanumeric character . so put all those in new string st
            }
        }

        int k=st.length();
        for (int z=0;z<k;z++){
            st[z]=tolower(st[z]);//convert to lowercase
        }

        int start=0;
        int end=k-1;
        for (int x=0;x<k/2;x++){
            if (st[start]==st[end]){
                start++;
                end--;
            }
            else{
                return false;    
            }   
        }
        return true;
    }

};
