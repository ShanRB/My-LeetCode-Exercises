from typing import List
class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        size = len(arr)
        zeros = 0
        
        for i in range(size):
            if i > size - zeros - 1:
                    break; 
            if arr[i] == 0:
                if i == size - zeros - 1:
                    arr[-1] = arr[i]
                    size -= 1
                else:
                    zeros += 1
        new_size = size - zeros
        for i in range(new_size-1,-1,-1):
            print('-- ', i)
            print(arr)
            if arr[i] == 0:
                arr[i+zeros] = 0
                zeros -= 1
                arr[i+zeros] = 0
            else:
                print('zeros: ', zeros)
                arr[i+zeros] = arr[i]


if __name__ == '__main__':
    
    sol = Solution()
    arr = [1,5,2,0,6,8,0,6,0]
    #arr = [1,5,2,0,6,0,8,6,0]
    print(arr)
    sol.duplicateZeros(arr)
    print(arr)