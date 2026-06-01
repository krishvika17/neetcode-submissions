class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n1= s1.length();
        int n2= s2.length();

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for (int q=0;q<n1;q++){
            mp1[s1[q]]++;
        }

        for(int i=0;i<n1;i++){
            mp2[s2[i]]++;
        }

        if(mp1 == mp2)
            return true;//1st window

        for(int r=n1; r<n2; r++){

            mp2[s2[r]]++;
            char left = s2[r-n1];//const window problem
            mp2[left]--;//left element freq deducted from 2nd map

            if(mp2[left] == 0){
                mp2.erase(left);//erase the key for equivalence to hold true (that key should not exist if freq=0)
            }

            if(mp1 == mp2)//see if keys and values corresponding tot hem are equal(order does not matter for char)
                return true;
        }

        return false;
    }
};
