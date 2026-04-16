class Solution {
public:
    bool isAnagram(string s, string t) {
        // goal is to check if the two strings are anagrams
        // so if all char in the string is also in the other string

        // brute force would be to do two loops and check if each character
        // is in each string

        // better alg would be to sort both strings and then see if they are equal


        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
       return s == t;
        
    }
};
