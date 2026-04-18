class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        #goal is to see if the array currenly holds a 
        #duplicate for example [1,2,3,3] has a duplicate

        #brute foce would be to double loop and compare
        #if all the elements have a duplicates 
        #if there is we return true;

        #alg would be to count frequency
        #if any of thr frequency is over 1 we return true

        map = set()

        for num in nums:
            if num in map:
                return True
            map.add(num)
        return False
            

        


        