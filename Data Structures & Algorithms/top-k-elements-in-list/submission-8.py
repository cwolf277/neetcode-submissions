import heapq
from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        #goal is to get the top kth 
        #most frequent number in a list of numbers

        #alg would be to create a list of frequency
        #see which one comes up the most
        #sort them by frequency
        #by asendinng order
        #and then we loop and add the numbers kth number

        #alg first we get the frequency of the nums into a hashmap
        #then we initialize the heap 
        #we loop the frequency items
        #and then we push the tupel into the heap
        #we want to check if the length of the heap
        #is larger than k if it is we pop the smallest number in the heap
        

        freq = Counter(nums)

        heap = []
        for num, count in freq.items():
            heapq.heappush(heap, (count,num))
            if len(heap) > k:
                heapq.heappop(heap)

        return [pair[1] for pair in heap]
        
        





