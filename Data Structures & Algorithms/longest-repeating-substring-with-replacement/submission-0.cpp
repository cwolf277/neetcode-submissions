class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> map;
  
  int left = 0;
  int result = 0;
  int maxfreq = 0;
  for(int right = 0; right< s.size(); right++){
    map[s[right]]++;
    maxfreq = max(maxfreq, map[s[right]]);

    while(((right -left) +1) - maxfreq > k){
      map[s[left]]--;
      left++;

    }

    result = max(result, (right-left) +1);
  }


  return result;

        
        
    }
};
