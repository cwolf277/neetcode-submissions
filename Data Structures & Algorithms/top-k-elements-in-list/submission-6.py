class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        #goal is to get the top kth 
        #most frequent number in a list of numbers

        #alg would be to create a list of frequency
        #see which one comes up the most
        #sort them by frequency
        #by asendinng order
        #and then we loop and add the numbers kth number
        
        freq = {}
        for i in nums:
            freq[i] = freq.get(i,0)+1

        sorted_freq = sorted(freq.items(), key = lambda x: x[1], reverse = True)


        return [pair[0] for pair in sorted_freq[:k]]





