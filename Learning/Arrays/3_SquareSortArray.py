class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        result = []
        for n in A:
            n = n * n
            result.append(n)
        return sorted(result)