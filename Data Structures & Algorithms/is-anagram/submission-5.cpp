class Solution {
public:
    bool isAnagram(string s, string t) {
        // goal is to check if the two strings are anagrams
        // so if all char in the string is also in the other string

        // brute force would be to sort both strings and then see if they are equal

        // better alg since all the possible characters in the string
        // are lowercase letters up to a-z we can say we have to worry about 
        // 26 characters
        // so we will iterarte through each string and keep count of each character
        // and then we will itterate through the next string and minus every string found

        unordered_map<char, int> count;

        for(char c: s){
            count[c]++;
        }

        for(char c: t){
            count[c]--;
        }

        for(auto check: count){
            if(check.second != 0){
                return false;
            }
        }

        
        
        return true;
    }
};
