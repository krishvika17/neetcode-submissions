class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int sz1=word1.length();
        int sz2=word2.length();
        int min_len=0;
        if (sz1>=sz2){
            min_len=sz2;
        }
        else{
            min_len=sz1;
        }
        string temp="";
        for (int i=0;i<min_len;i++){
            temp.push_back(word1[i]);
            temp.push_back(word2[i]);
        }
        if (min_len==sz2){
            for (int j=min_len;j<sz1;j++){
            temp.push_back(word1[j]);
            }
        }
        else if(min_len==sz1){
            for (int k=min_len;k<sz2;k++){
            temp.push_back(word2[k]);
            }
        }
        return temp;
    }
};