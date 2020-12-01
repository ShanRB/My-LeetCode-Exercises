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