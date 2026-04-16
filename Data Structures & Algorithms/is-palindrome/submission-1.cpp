class Solution {
public:
    bool isPalindrome(string s) {
        string change = "";
        for(char c: s){
            if(isalnum(c)){
                change += tolower(c);
            }
        }
        string reverses = change;
        reverse(change.begin(), change.end());

        return change == reverses;
        
    }
};
