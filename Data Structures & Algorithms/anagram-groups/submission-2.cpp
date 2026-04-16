class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //goal: 
    //the goal is to look through an array of strings
    // and group all substrings together that are anagrams

    //constraints:
    //1 <= strs.length <= 1000
    //0 <= strs[i].length <= 100
    //strs[i] is made up of lowercase English letters.

    //brute force:
    //create a hashmap
    //loop through the array
    //create a key that equals the current string
    // sort key
    // add the word at key 
    // and then group them with a hashmap
    // solution would be O(m* nlogn)

    //alg1:


    unordered_map<string, vector<string>> hashmap;

    for( auto& word: strs){
        string key = word;
        sort(key.begin(), key.end());
        hashmap[key].push_back(word);
    }

    vector<vector<string>> res;
    for(auto& word: hashmap){
        res.push_back(word.second);
    }




        return res;
    }
};
