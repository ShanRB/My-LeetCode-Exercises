"""
 Given an array A of integers, return true if and only if it is a valid mountain array.

Recall that A is a mountain array if and only if:

A.length >= 3
There exists some i with 0 < i < A.length - 1 such that:
A[0] < A[1] < ... A[i-1] < A[i]
A[i] > A[i+1] > ... > A[A.length - 1]
"""
class Solution:
    def validMountainArray(self, A: List[int]) -> bool:
        inc = True
        if len(A) < 3:
            return False
        for i in range(1,len(A)):
            if A[i] == A[i-1]:
                return False
            if inc:
                if A[i] < A[i-1]:
                    if i == 1:
                        return False
                    inc = False
            else:
                if A[i] >= A[i-1]:
                    return False
        if inc:
            return False
        return True