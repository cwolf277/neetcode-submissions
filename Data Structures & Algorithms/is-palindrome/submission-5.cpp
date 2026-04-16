class Solution {
public:
    bool isPalindrome(string s) {
      //goal is to see if the string is a palindrome which is 
      // to see if the string is the same from front to back

      // brute would be to reverse a string
      // and then comapre the string


   
    string t = s;
    reverse(s.begin(), s.end());


    transform(t.begin(), t.end(), t.begin(), ::tolower);
    t.erase(std::remove_if(t.begin(), t.end(), ::isspace), t.end());

    s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c){ return !std::isalnum(c); }), s.end());
    t.erase(std::remove_if(t.begin(), t.end(), [](unsigned char c){ return !std::isalnum(c); }), t.end());

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
    cout<< s<< endl;
    cout<< t<< endl;
    return s == t;


       



    }
};