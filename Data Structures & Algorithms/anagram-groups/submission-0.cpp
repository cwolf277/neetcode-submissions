class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> map;

       for(int i =0; i< strs.size(); i++){
        string sortedi = strs[i];
        sort(sortedi.begin(), sortedi.end());
        map[sortedi].push_back(strs[i]);
       }
       
        vector<vector<string>> fine;
       for(auto& pair: map){
            fine.push_back(pair.second);
       }



       return fine;
    }
};
