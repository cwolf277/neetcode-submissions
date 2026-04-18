class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        #goal is to see if the array currenly holds a 
        #duplicate for example [1,2,3,3] has a duplicate

        #brute foce would be to double loop and compare
        #if all the elements have a duplicates 
        #if there is we return true;

        #alg would be to create a set 
        #and then we loop and we check if 
        #the number has been in the set
        #if not we add the number in the set
        #return false if the loop is over
        
        map = {}
        for i in nums:
            if i in map:
                map[i] += 1
            else:
                map[i] = 1


        for i in map.values():
            if i > 1:
                return True

        return False


        


        