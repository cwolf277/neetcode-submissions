class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #goal is to see if the word is an anagram
        #so for example if a word has all the same letters
        

        #alg would be to compare the two by sorting them both

        #alg would be to count frequencies of all the letters
        # we check if both frequencies match 0 if it doesnt 
        # we return false
        # otherwise we return true


        freq = {}

        for i in s:
            freq[i] = freq.get(i,0)+1
        for j in t:
            freq[j] = freq.get(j,0) -1

        for count in freq.values():
            if count != 0:
                return False

        return True;




       

        return sorted(s) == sorted(t)

        

        