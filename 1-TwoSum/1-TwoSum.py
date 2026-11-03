# Временная сложность O(n^2)
# Пространственная сложность О(1)
class Solution(object):
    def twoSum(self, nums, target):
        res = []
        for i in range(0, len(nums)):
            a = target - nums[i]
            if a in nums and nums.index(a) != i:
                res.append(i)
                res.append(nums.index(target - nums[i]))
                break
        return res

# Временная сложность О(n)
# Пространственная сложность О(n)
class Solution(object):
    def twoSum(self, nums, target):
        res = {}
        for i, num in enumerate(nums):
            a = target - num
            if a in res:
                return [res[a], i]
            res[num] = i