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
       // remove white spaces
       // remove any non letters or non numbers
       // lowercase all the letters
       // return if they equal each other

       //alg1:
       // loop through the string
       // and make everything lowercase
       // first we will create a string 
       // initialise left and right
       // while left is less than right
       // we will check if the string is an alphanum
       // if it is not we move on to the next letter by adding or minusing the right
       // check if left and right match
       // if not return false
       // add left and minus right
       // finally return true after all checks have been made
       
       for(auto& c: s){
        c = tolower(c);
       }
       
       int left =0;
       int right = s.length()-1;
       while(left< right){
        while(left< right && !isalnum(s[left]))
        left++;
        while(left< right && !isalnum(s[right]))
        right--;

        if(s[left] != s[right])
        return false;

        left++;
        right--;
       }
    return true;


    


       



    }
};
