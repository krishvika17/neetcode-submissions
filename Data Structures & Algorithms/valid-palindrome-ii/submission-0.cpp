class Solution {
public:
    bool validPalindrome(string s) {
        int sz=s.length();
        int left=0;
        int right=sz-1;
        for (int i=0;i<sz/2;i++){//checking if initial given string is palindrome
            if (s[left]==s[right]){
                left++;
                right--;
            }
            else{
                return one_ch(s);//new function where 1 char deletes to check if then palindrome
            }
        }
        return true;
    }
    bool one_ch(string s){ 
        int sz_1=s.length()-1;
        for (int j=0;j<=sz_1;j++){//one deletion at a time;
            bool palindrome=true; //initially consider its a palindrome
            string temp=s;//temp variable to store copy of string as deletions everytime would be made on copy 
            temp.erase(j,1);
            int l=0;
            int r=sz_1-1;
            for (int q=0;q<sz_1/2;q++){//checking palindrome for particular deletion
                if (temp[l]==temp[r]){
                    l++;
                    r--;
                }
                else{
                    palindrome=false;
                    break;//stop checking further that deletion 
                }
            }
            if (palindrome){
                return true;
            }
        }

        return false;
    }

};