arr = [1, 3, 4, 2, 5]

print(sorted(arr)) # sorted in ascending order

print(sorted(arr, reverse=True)) # sorted in descending order

nums = [-1, 5, -6, 7, 4]

print(sorted(nums, key = lambda x : abs(x))) # sorted according to absolute values

print(min([3, 1, 4, 1, 5]))
print(max([3, 1, 4, 1, 5]))

array = [1, 3, 6, 8, 9]
print(list(reversed(array)))