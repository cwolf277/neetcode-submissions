class Solution {
public:
    bool isPalindrome(string s) {
      //goal is to see if the string is a palindrome which is 
      // to see if the string is the same from front to back

      // brute would be to reverse a string
      // and then comapre the string

      //better alg would be to 
      // have one pointer to the front and back
      // compare and iterate back and forwards
      // if one is not simialr its not a palindrome

      int left = 0;
      int right = s.size()-1;

      while(left < right){
        while (left < right && !std::isalnum(s[left])) left++;
        while (left < right && !std::isalnum(s[right])) right--;
      

      if (std::tolower(s[left]) != std::tolower(s[right])) {
        return false;
      }
      

      left++;
      right--;
      }
    
    return true;
    }

   
 



    
};