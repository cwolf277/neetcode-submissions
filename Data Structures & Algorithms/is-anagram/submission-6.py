class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #goal is to see if the word is an anagram
        #so for example if a word has all the same letters
        # Racecar is an example

        #alg would be to compare the two by sorting them both


        sorteds = ''.join(sorted(s))
        sortedt = ''.join(sorted(t))

        return sorteds == sortedt

        

        