"""
Given an integer number n, return the difference between the product of its digits and the sum of its digits. 
"""
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sumV = 0
        proV = 1
        while n >= 10:
            d = n % 10
            n = n //10
            sumV+=d
            proV*=d
        sumV+=n
        proV*=n
        return proV - sumV

if __name__ == '__main__':
    sol = Solution()
    print(sol.subtractProductAndSum(1024))