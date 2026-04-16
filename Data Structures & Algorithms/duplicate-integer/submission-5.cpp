#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // goal: the goal is to look through an array
        // and see if a number appears twice

        //brute force: brute force is to check every element with each other
        // and then compare starting from the first element

        // optimal: create a hash set and add numbers into
        // the set see if the number is in the set if it is
        // return true
        // otherwise return false

        //constraints:
        


        unordered_set<int> map;

       for(int i: nums){
        if(map.count(i)){
            return true;
        }
    
        map.insert(i);
       }

        return false;
    }

    
};
