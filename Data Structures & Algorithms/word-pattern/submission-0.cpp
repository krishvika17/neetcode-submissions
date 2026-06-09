class Solution {
public:
    bool wordPattern(string pattern, string s) {
       vector<string>slist;//o(pattern.length)-sc
       stringstream ss(s);
       string word="";

       while (ss>>word){
            slist.push_back(word);
       }
        if (slist.size()!=pattern.length()){
            return false;//keys /freq not same 
        }
        unordered_map<char, string> c2w;//o(26)-sc
        unordered_map<string, char> w2c;//o(pattern/slist.length)-sc
        //even if key freq same we need to check exact positioning of char to string and string to char

        for(int i = 0; i < pattern.length(); i++) {

            char c = pattern[i];
            string w = slist[i];

            if(c2w.count(c) && c2w[c] != w)//check if key exists and key has value other than the previous
                return false;

            if(w2c.count(w) && w2c[w] != c)//can also use find(key)!=end()- returns iterator
                return false;

            c2w[c] = w;//update hashmaps
            w2c[w] = c;
        }
        return true;
    }
};//tc=o(string.length+pattern.length)=o(m+n)