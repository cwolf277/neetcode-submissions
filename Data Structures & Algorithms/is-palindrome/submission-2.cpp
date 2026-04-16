class Solution {
public:
    bool isPalindrome(string s) {
       //goal:
       // the goal is to check if the given string
       // when reversed is the same when it is backwards
       // example: racecar is the same backwards

       //constraints:
       // 1 <= s.length <= 1000
       // s is made up of only printable ASCII characters.

       //brute force:
       // duplicate the string
       // reverse it
       // check if it equals s


       string t =s;
       reverse(t.begin(), t.end());
       s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
       t.erase(std::remove_if(t.begin(), t.end(), ::isspace), t.end());
       std::transform(s.begin(), s.end(), s.begin(),
                   ::tolower);
std::transform(t.begin(), t.end(), t.begin(),
                   ::tolower);
                   s.erase(std::remove_if(s.begin(), s.end(), [](char c) { return !std::isalnum(static_cast<unsigned char>(c)); }), s.end());
                   t.erase(std::remove_if(t.begin(), t.end(), [](char c) { return !std::isalnum(static_cast<unsigned char>(c)); }), t.end());



                   cout<< t << " " << s;


       return t == s;



    }
};
