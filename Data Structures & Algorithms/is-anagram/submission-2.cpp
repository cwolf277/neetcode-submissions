class Solution {
public:
    bool isAnagram(string s, string t) {
        // goal is to check if the string given has the same
        // strings as the other string given regardless of order

        //brute force
        // two loops
        //checks each individual one if they equal we keep count
        // if the count equals the size of the first string then return true
        // loop through and return false;

        //alg 1
        // sort both strings
        // then we make string 1 equal to string 2 
        // if not then return false

        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        return t == s;
        
        
    }
};
