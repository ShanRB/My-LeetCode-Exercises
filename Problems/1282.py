""" 

There are n people whose IDs go from 0 to n - 1 and each person belongs exactly to one group. Given the array groupSizes of length n telling the group size each person belongs to, return the groups there are and the people's IDs each group includes.

You can return any solution in any order and the same applies for IDs. Also, it is guaranteed that there exists at least one solution. 
"""
class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        bucket = {}
        for i in range(len(groupSizes)):
            if groupSizes[i] not in bucket:
                bucket[groupSizes[i]] = [i]
            else:
                bucket[groupSizes[i]] += [i]
        result = []
        for key,value in bucket.items():
            for j in range(len(value)//key):
                result.append(value[j*key:(j+1)*key])
        return result