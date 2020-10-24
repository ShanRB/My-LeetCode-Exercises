""" 
Given the array queries of positive integers between 1 and m, you have to process all queries[i] (from i=0 to i=queries.length-1) according to the following rules:

In the beginning, you have the permutation P=[1,2,3,...,m].
For the current i, find the position of queries[i] in the permutation P (indexing from 0) and then move this at the beginning of the permutation P. Notice that the position of queries[i] in P is the result for queries[i].
Return an array containing the result for the given queries.
"""
from typing import List
class Solution:
    def processQueries(self, queries: List[int], m: int) -> List[int]:
        permutation = {i:i-1 for i in range(1,m+1)}
        result = []
        for n in queries:
            result.append(permutation[n])
            for key,value in permutation.items():
                if value < permutation[n]:
                    permutation[key] += 1
            permutation[n] = 0
        return result

if __name__=='__main__':
    queries = [3,1,2,1]
    m = 5
    sol = Solution()
    sol.processQueries(queries,m)